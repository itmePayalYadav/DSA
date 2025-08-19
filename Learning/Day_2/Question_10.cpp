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
    if(index == size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);

    return temp;
}

int main(){
    Node *Head = NULL;

    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    Head = CreateLinkedList(arr, 0, n);

    int x = 3; 
    int value = 30;

    Node *temp = Head;
    x--; 

    while (--x){
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    Node* printPtr = Head;
    while (printPtr){
        cout << printPtr->data << " -> ";
        printPtr = printPtr->next;
    }

    cout << "NULL" << endl;

    return 0;
}
