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

int main(){
    Node *head = new Node(23);
    Node *second = new Node(45);
    Node *third = new Node(56);
    Node *fourth = new Node(63);

    head->next = second;
    second->next = third;
    third->next = fourth;

    second->prev = head;
    third->prev = second;
    fourth->prev = third;

    Node *current = head;
    cout << "Forward: ";
    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    // Print backward (prev) from tail
    current = fourth;
    cout << "Backward: ";
    while(current){
        cout << current->value << " -> ";
        current = current->prev;
    }
    cout << "NULL" << endl;

    return 0;
}
