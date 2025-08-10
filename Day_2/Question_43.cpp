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

Node *CreatedLinkedList(int arr[], int index, int size, Node *prev){
    if(index == size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = prev;

    temp->next = CreatedLinkedList(arr, index + 1, size, temp);

    return temp;
};

Node *SortList(Node *head) {
    int count0 = 0, count1 = 0, count2 = 0;

    Node *current = head;

    while(current){
        if(current->value == 0){
        count0++;
        }
        else if (current->value == 1){
            count1++;
        }else{
            count2++;
        }
        current = current->next;
    }

    current = head;
    while(count0--){
        current->value = 0;
        current = current->next;
    }
    while(count1--){
        current->value = 1;
        current = current->next;
    }
    while(count2--){
        current->value = 2;
        current = current->next;
    }

    return head;
};

int main(){
    int arr[8] = {0, 1, 0, 2, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = CreatedLinkedList(arr, 0, n, NULL);

    Node *current = SortList(head);

    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
};
