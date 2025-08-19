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

Node *CreateCircularLinkedList(int arr[], int index, int size, Node *prev) {
    if(index == size) {
        if(head && prev){
            prev->next = head;
            head->prev = prev;
        }
        return head;
    };

    Node *temp = new Node(arr[index]);

    if(index == 0){
        head = temp;
    }

    temp->prev = prev;

    if (prev){
        prev->next = temp;
    }

    CreateCircularLinkedList(arr, index + 1, size, temp);

    return head;
};

int check(vector<Node*>&visited, Node *current){
    for (int i = 0; i < visited.size(); i++){
        if(visited[i] == current){
            return 1;
        }
    }
    return 0;
};

bool detectedLoop(Node *head){
    Node *current = head;
    vector<Node *> visited;

    // Traverse the Node
    while (current){
        // Node is already visited or not
        if(check(visited, current)){
            return true;
        }
        visited.push_back(current);
        current = current->next;
    }
    return false;
}

int main(){
    int arr[8] = {100, 200, 300, 400, 500, 600, 700, 800};
    int n = sizeof(arr) / sizeof(arr[0]);

    CreateCircularLinkedList(arr, 0, n, NULL);

    if (detectedLoop(head)) {
        cout << "Loop detected in the circular linked list." << endl;
    } else {
        cout << "No loop detected." << endl;
    }
}
