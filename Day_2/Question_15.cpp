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

Node* deleteNode(Node *current, int x){
    if(x == 1){
        Node *temp = current->next;
        delete current;
        return temp;
    }
    current->next = deleteNode(current->next, x - 1);
    return current;
}

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

    cout << "Original List: ";
    printList(Head);

    int position = 3;

    Head = deleteNode(Head, position);

    cout << "After Deleting Position " << position << ": ";
    printList(Head);

    return 0;
}