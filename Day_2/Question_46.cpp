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

Node *SortedList(Node *head){
    if(!head || !head->next) return head;

    Node *head0 = new Node(-1);
    Node *head1 = new Node(-1);
    Node *head2 = new Node(-1);

    Node *zero = head0;
    Node *one = head1;
    Node *two = head2;

    Node *current = head;

    while (current) {
        if(current->value == 0){
            zero->next = current;
            current->prev = zero;
            zero = zero->next;
        }else if(current->value == 1){
            one->next = current;
            current->prev = one;
            one = one->next;
        }else{
            two->next = current;
            current->prev = two;
            two = two->next;
        }
        current = current->next;
    }

    two->next = NULL;

    if(head1->next){
        zero->next = head1->next;
        head1->next->prev = zero;
        one->next = head2->next;
        if (head2->next) head2->next->prev = one;
    }else{
        zero->next = head2->next;
        if (head2->next) head2->next->prev = zero;
    }

    Node *temp = head0->next;
    if(temp) temp->prev = NULL;

    delete head0;
    delete head1;
    delete head2;

    return temp;
};

int main(){
    int arr[8] = {0, 1, 0, 2, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = CreateDoubleLinkedList(arr, 0, n, NULL);
    Node *current = SortedList(head);

    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}