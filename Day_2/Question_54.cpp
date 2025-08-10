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

Node *head = NULL;

Node *CreateCircularDoubleLinkedList(int arr[], int index, int size, Node *prev){
    if(index == size){
        if(head && prev){
            prev->next = head;
            head->prev = prev;
        }
        return head;
    }

    Node *temp = new Node(arr[index]);

    if(index == 0){
        head = temp;
    }

    temp->prev = prev;

    if(prev){
        prev->next = temp;
    }

    CreateCircularDoubleLinkedList(arr, index + 1, size, temp);

    return head;
};

void DetectedLoop(){
    Node *fast = head;
    Node *slow = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            break;
        }
    }

    if(!fast || !fast->next){
        cout << "No loop detected." << endl;
        return;
    }

    slow = head;

    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    while (slow->next != fast){
        slow = slow->next;
    }

    slow->next = NULL;
    cout << "Loop removed successfully." << endl;
};

int main(){
    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    CreateCircularDoubleLinkedList(arr, 0, n, NULL);

    DetectedLoop();
}
