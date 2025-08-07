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

Node *CreateDoubleLinkedList(int arr[], int index, int size){
    if(index == size) return NULL;

    Node *node = new Node(arr[index]);
    node->next = CreateDoubleLinkedList(arr, index + 1, size);
    if(node->next != NULL){
        node->next->prev = node;
    }
    return node;
}

int main(){
    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = CreateDoubleLinkedList(arr, 0, n);

    // Delete at End
    if(head!= NULL){
        // If Only One Node Exists
        if(head->next == NULL){
            delete head;
            head = NULL;
        }
        // More than 1 Node Exists
        else {
            Node *temp = head;
            // Go Until Last Node
            while(temp->next){
                temp = temp->next;
            }
            temp->prev->next = NULL;
            delete temp;
        }
    };

    Node *current = head;
    while (current){
        cout << current->value << " -> ";
        current = current->next;
    }
    
    cout << "NULL" << endl;
}
