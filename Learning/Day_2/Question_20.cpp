#include<iostream>
using namespace std;

class ListNode {
public:
    int value;
    ListNode *next;

    ListNode(int value){
        this->value = value;
        next = NULL;
    }
};

ListNode* CreateLinkedList(int arr[], int index, int size, ListNode *prev){
    if (index == size) return prev;
    ListNode *temp = new ListNode(arr[index]);
    temp->next = prev;

    return CreateLinkedList(arr, index + 1, size, temp);
};

ListNode* MiddleList(ListNode *head) {
    int count = 0;

    ListNode *temp = head;

    while (temp != NULL){
        count++;
        temp = temp->next;
    }

    count /= 2;

    temp = head;

    while (count--){
        temp = temp->next;
    }

    return temp;
};

int main(){
    int arr[7] = {100, 200, 300, 400, 500, 600, 700};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode *head = CreateLinkedList(arr, 0, n, NULL);

    ListNode *middle = MiddleList(head);

    ListNode *current = middle;  

    while (current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}