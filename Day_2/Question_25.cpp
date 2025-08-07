#include<iostream>
using namespace std;

class ListNode{
public:
    int value;
    ListNode *next;
    
    ListNode(int value){
        this->value = value;
        next = NULL;
    }
};

ListNode* CreateLinkedList(int arr[], int index, int size, ListNode *prev){
    if(index == size)
        return prev;

    ListNode *temp = new ListNode(arr[index]);
    temp->next = prev;

    return CreateLinkedList(arr, index + 1, size, temp);
}

ListNode *RotatedList(ListNode *head, int k) {
    int count = 0;

    ListNode *temp = head;

    while(temp){
        count++;
        temp = temp->next;
    }

    k = k % count;

    if(k == 0){
        return head;
    }

    count -= k;

    ListNode *current = head;
    ListNode *prev = NULL;

    while(count--){
        prev = current;
        current = current->next;
    }

    ListNode *tail = current;

    while(tail->next != NULL){
        tail = tail->next;
    }

    prev->next = NULL;
    tail->next = head;
    head = current;

    return head;
};

int main(){
    int arr[8] = {100, 200, 300, 400, 500, 600, 700, 800};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    ListNode *head = CreateLinkedList(arr, 0, 7, NULL);

    head = RotatedList(head, target);

    ListNode *current = head;
    
    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}