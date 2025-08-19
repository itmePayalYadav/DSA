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

Node *CreateDoubleLinkedList(int arr[], int index, int size, Node *prev){
    if(index == size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = prev;
    temp->next = CreateDoubleLinkedList(arr, index + 1, size, temp);

    return temp;
}

Node *MergeDoubleLinkedList(Node *head1, Node *head2) {
    Node *head = new Node(-1); 
    Node *tail = head;

    while (head1 && head2){
        if(head1->value <= head2->value){
            tail->next = head1;
            head1->prev = tail;
            tail = tail->next;
            head1 = head1->next; 
        }
        else {
            tail->next = head2;            
            head2->prev = tail;
            tail = tail->next;
            head2 = head2->next; 
        }
    }

    if (head1){
        tail->next = head1;
        head1->prev = tail;
    }
    else if (head2){
        tail->next = head2;
        head2->prev = tail;
    }

    Node *temp = head;
    head = head->next;
    if (head) head->prev = NULL;
    delete temp;

    return head;
}

int main(){
    int sortOne[4] = {2, 4, 5, 7};
    int sortTwo[6] = {3, 4, 4, 6, 8, 10};

    Node *head1 = CreateDoubleLinkedList(sortOne, 0, 4, NULL);
    Node *head2 = CreateDoubleLinkedList(sortTwo, 0, 6, NULL);

    Node *current = MergeDoubleLinkedList(head1, head2);

    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;

    return 0;
}
