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
    Node *head;

    head = NULL;

    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }else{
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    Node *current = head;
    while (current){
        cout << "[ " << current->value << " ]" << " -> ";
        current = current->next;
    }
}
