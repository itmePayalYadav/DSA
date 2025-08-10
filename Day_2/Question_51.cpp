#include<iostream>
#include<unordered_map>
using namespace std;

class Node {
public:
    int value;

    Node *next;
    Node *prev;

    Node (int value){
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

Node *DetectedCircularLinkedList() {
    Node *current = head;

    unordered_map<Node *, bool> visited;

    while(current != NULL){
        if(visited[current] == 1){
            return current;
        }
        visited[current] = 1;
        current = current->next;
    }

    return NULL;
};

int main(){
    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    CircularDoubleLinkedList(arr, 0, n, NULL);

    Node *current = head;

    Node* cycleNode = DetectedCircularLinkedList();

    if(cycleNode){
        cout << "Cycle detected at node with value: " << cycleNode->value << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
}
