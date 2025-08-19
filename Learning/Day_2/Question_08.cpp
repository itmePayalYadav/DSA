#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int index, int size) {
    if(index == size)return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);

    return temp;
};

int main(){
    Node *Head;
    Head = NULL;

    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    Head = CreateLinkedList(arr, 0, n);

    Node* current = Head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    return 0;
}