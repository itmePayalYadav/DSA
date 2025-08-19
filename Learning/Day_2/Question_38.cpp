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

Node *CreateDoubleLinkedList(int arr[], int index, int size, Node* prev) {
    if(index == size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = prev;

    temp->next = CreateDoubleLinkedList(arr, index + 1, size, temp);

    return temp;
};

int main(){
    int arr[8] = {2, 2, 2, 3, 3, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = CreateDoubleLinkedList(arr, 0, n, NULL);

    Node *current = head;

    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}
