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

Node* CreateDoubleLinkedList(int arr[], int index, int size, Node* prev) {
    if(index == size) return NULL;

    Node *node = new Node(arr[index]);
    node->prev = prev;
    node->next = CreateDoubleLinkedList(arr, index + 1, size, node);
    return node; 
}

Node *RemoveDuplicate(Node* head){
    if (!head) return NULL;

    Node *current = head->next;
    Node *prev = head;

    while(current){
        if(current->value == prev->value){
            prev->next = current->next;
            if (current->next)
                current->next->prev = prev;

            delete current;
            current = prev->next;
        }
        else{
            prev = current;
            current = current->next;
        }
    }

    return head;
}

int main(){
    int arr[10] = {100, 100, 100, 200, 200, 300, 400, 400, 500, 600};

    Node *head = CreateDoubleLinkedList(arr, 0, 8, NULL);

    head = RemoveDuplicate(head);

    Node *current = head;

    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}
