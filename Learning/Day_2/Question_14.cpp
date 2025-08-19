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

Node* createSampleList() {
    Node* head = new Node(100);
    head->next = new Node(200);
    head->next->next = new Node(300);
    head->next->next->next = new Node(400);
    head->next->next->next->next = new Node(500);
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node *Head = createSampleList();

    int x = 1; 

    if(x == 1){
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }
    else {
        x--;
        Node *current = Head;
        Node *prev = NULL;

        while (x-- && current != NULL){
            prev = current;
            current = current->next;
        }

        if(current != NULL && prev != NULL){
            prev->next = current->next;
            delete current;
        }
    }

    cout << "Updated Linked List: ";
    printList(Head);

    return 0;
}
