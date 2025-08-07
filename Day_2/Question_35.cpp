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

Node *CreateDoubleLinkedList(int arr[], int index, int size, Node * back) {
    if(index == size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = back;

    temp->next = CreateDoubleLinkedList(arr, index + 1, size, temp);

    return temp;
};

int main(){
    Node *head = NULL;

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    head = CreateDoubleLinkedList(arr, 0, n, NULL);

    int pos = 2;

    // Insert at Start
    if(pos == 0){
        if(head == NULL){
            // LinkedList is not exits
            head = new Node(5);
        }else{
            // LinkedList is exits
            Node *temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }else{
        
        Node *current = head;
        // Go to the node, after which I have to insert
        while(--pos){
            current = current->next;
        };
        if(current->next == NULL){
            // Insert at End
            Node *temp = new Node(5);
            temp->prev = current;
            current->next = temp;
        }else{
            // Insert at Middle
            Node *temp = new Node(5);
            temp->next = current->next;
            temp->prev = current;
            current->next = temp;
            temp->next->prev = temp;
        }
    }

    Node *result = head;
    while (result){
        cout << result->value << " -> ";
        result = result->next;
    }

    cout << "NULL" << endl;
}
