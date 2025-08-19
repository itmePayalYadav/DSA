#include<iostream>
using namespace std;

class Node{
public:
    int value;

    Node *next;
    Node *prev;

    Node(int value){
        this->value = value;
        next = prev = NULL;
    }
};

Node *head = NULL;

Node *CreateCircularLinkedList(int arr[], int index, int size, Node *prev) {
    if(index == size) {
        if(head && prev){
            prev->next = head;
            head->prev = prev;
        }
        return head;
    };

    Node *temp = new Node(arr[index]);

    if(index == 0){
        head = temp;
    }

    temp->prev = prev;

    if (prev){
        prev->next = temp;
    }

    CreateCircularLinkedList(arr, index + 1, size, temp);

    return head;
};

int main() {
    int arr[8] = {100, 200, 300, 400, 500, 600, 700, 800};
    int n = sizeof(arr) / sizeof(arr[0]);

    CreateCircularLinkedList(arr, 0, n, NULL);

    Node *current = head;
    int count = 0;

    cout << "Circular Doubly Linked List: ";
    while(current && count < n){
        cout << current->value << " -> ";
        current = current->next;
        count++;
    }
    cout << "(back to head: " << head->value << ")" << endl;
}