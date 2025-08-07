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

int main(){

    Node *head = NULL;
    Node *temp = head;

    // Insert at start


    // LinkedList doesn`t exist
    if(head == NULL){
        head = new Node(6);
    }
    // Already exist
    else {
        Node *temp = new Node(100);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    Node *current = head;
    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}