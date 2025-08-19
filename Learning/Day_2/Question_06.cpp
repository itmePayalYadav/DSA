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

int main() {
    Node *Head;
    Node *Tail;
    Head = NULL;

    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
            Tail = Head;
        }else{
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    Node *current = Head;
    while(current != NULL){
        cout << current->data << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
};