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

void deleteNode(Node *current){
    if (current == NULL || current->next == NULL) {
        cout << "Deletion not possible for NULL or last node." << endl;
        return;
    }

    Node *temp = current->next;
    current->data = temp->data;
    current->next = temp->next;
    delete temp;
}

void printList(Node *head){
    while (head != NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original list: ";
    printList(head);

    deleteNode(head->next); 

    cout << "After deleting 20 (without head): ";
    printList(head);

    return 0;
}
