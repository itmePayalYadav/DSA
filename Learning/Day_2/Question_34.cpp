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

Node *CreateDoubleLinkedList(int arr[], int index, int size, Node * back) {
    if(index == size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = back;

    temp->next = CreateDoubleLinkedList(arr, index + 1, size, temp);

    return temp;
};

Node* InsertAtStart(Node *head, int value){
    Node *temp = new Node(value);
    temp->next = head;

    if(head != NULL){
        head->prev = temp;
    }

    return temp;
}

int main(){
    Node *head = NULL;

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    head = CreateDoubleLinkedList(arr, 0, n, NULL);

    head = InsertAtStart(head, 0); 
    head = InsertAtStart(head, -1);  

    Node *current = head;
    while (current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}
