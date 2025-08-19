#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int index, int size){
    if(index==size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

void PrintLinkedList(Node* head) {
    while(head){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *Head = CreateLinkedList(arr, 0, n);

    cout << "Original LinkedList: " << endl;
    PrintLinkedList(Head);

    if(Head != NULL){
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }

    cout << endl;

    cout << "New LinkedList: " << endl;
    PrintLinkedList(Head);

    cout << endl;

    return 0;
}