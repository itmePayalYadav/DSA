#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value){
        this->value = value;
        next = NULL;
        prev = NULL;
    }
};

Node* CreateDoubleLinkedList(int arr[], int index, int size, Node *back) {
    if(index == size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDoubleLinkedList(arr, index + 1, size, temp);

    return temp;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *tail = CreateDoubleLinkedList(arr, 0, n, NULL);

    Node *head = tail;
    while (head && head->prev) {
        head = head->prev;
    }

    Node *current = head;
    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}
