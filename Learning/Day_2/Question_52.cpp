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

Node *CircularDoubleLinkedList(int arr[], int index, int size, Node *prev) {
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

    CircularDoubleLinkedList(arr, index + 1, size, temp);

    return head;

};

Node *DetectedCircularLinkedList(){
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return slow;
        }
    }

    return NULL;
};

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    CircularDoubleLinkedList(arr, 0, n, NULL);

    Node *cycleNode = DetectedCircularLinkedList();

    if(cycleNode){
        cout << "Cycle detected: " << cycleNode->value << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
}