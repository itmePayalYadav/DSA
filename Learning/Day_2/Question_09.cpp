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

Node* CreateLinkedList(int arr[], int index, int size, Node *prev) {
    if(index== size) return prev;

    Node *temp;
    temp = new Node(arr[index]);

    temp->next = prev;

    return CreateLinkedList(arr, index + 1, size, temp);
};


int main(){
    Node *Head;
    Head = NULL;

    int arr[7] = {100, 200, 300, 400, 500, 600, 700};
    int n = sizeof(arr) / sizeof(arr[0]);

    Head = CreateLinkedList(arr, 0, n, NULL);

    Node *temp;
    temp = Head;

    while (temp){
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}