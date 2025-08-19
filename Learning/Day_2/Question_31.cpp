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
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = NULL;
    Node *tail;

    for (int i = 0; i < n; i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    Node *current = head;
    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "Null" << endl;
}