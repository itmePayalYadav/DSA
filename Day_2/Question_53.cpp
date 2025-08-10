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

Node *CreateCircularLinkedList(int arr[], int index, int size, Node *prev) {
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

    CreateCircularLinkedList(arr, index + 1, size, temp);

    return head;
};

int DetectedCircularLinkedList(){
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
        return 0;
    }

    int count = 1;
    slow = fast->next;

    while (slow != fast){
        count++;
        slow = slow->next;
    }

    return count;
}

int main(){
    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    CreateCircularLinkedList(arr, 0, n, NULL);

    int count = DetectedCircularLinkedList();

    cout << "Total length of loop is: " << count << endl;
}