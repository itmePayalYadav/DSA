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

Node *CreateDoubleLinkedList(int arr[], int index, int size, Node *back){
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = back;

    temp->next = CreateDoubleLinkedList(arr, index + 1, size, temp);

    return temp;
}

int main(){
    Node *head = NULL;

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    head = CreateDoubleLinkedList(arr, 0, n, NULL);

    int position = 3;

    if(position == 1){
        // Delete at End
        if(head!= NULL){
            // If Only One Node Exists
            if(head->next == NULL){
                delete head;
                head = NULL;
            }
            // More than 1 Node Exists
            else {
                Node *temp = head;
                // Go Until Last Node
                while(temp->next){
                    temp = temp->next;
                }
                temp->prev->next = NULL;
                delete temp;
            }
        };
    }else{
        Node *current = head;

        while(--position){
            current = current->next;
        }

        if(current->next == NULL){
            current->prev->next = NULL;
            delete current;
        }else{
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
        }
    }

    Node *result = head;
    while (result){
        cout << result->value << " -> ";
        result = result->next;
    }
    
    cout << "NULL" << endl;
}