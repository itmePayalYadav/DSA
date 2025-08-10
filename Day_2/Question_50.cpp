#include<vector>
#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value){
        this->value = value;
        next = prev = NULL;
    }
};

Node *head = NULL;

Node *CircularDoubleLinkedList(int arr[], int index, int size, Node *prev) {
    if(index == size){
        if(head && prev){
            prev->next = head;
            head->prev = prev;
        }
        return head;
    }

    Node *temp = new Node(arr[index]);

    if(index == 0){
        head = temp;
    }

    temp->prev = prev;

    if(prev){
        prev->next = temp;
    }

    CircularDoubleLinkedList(arr, index + 1, size, temp);

    return head;
};

bool check(vector<Node *>& visited, Node *current){
    for (int i = 0; i < visited.size(); i++){
        if(visited[i] == current){
            return 1;
        }
    }
    return 0;
};

Node *DetectedCircularLinkedList(){
    Node *current = head;

    vector<Node *> visited;

    while(current){
        if(check(visited, current)){
            return current; 
        }
        visited.push_back(current);
        current = current->next;
    }

    return NULL;
};

int main(){
    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    CircularDoubleLinkedList(arr, 0, n, NULL);

    Node* cycleNode = DetectedCircularLinkedList();

    if(cycleNode){
        cout << "Cycle detected at node with value: " << cycleNode->value << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
}
