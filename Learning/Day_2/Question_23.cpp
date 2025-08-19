#include<iostream>
using namespace std;

class ListNode {
public:
    int value;
    ListNode *next;

    ListNode(int data){
        this->value = data;
        next = NULL;
    }
};

ListNode* CreateLinkedList(int arr[], int index, int size, ListNode *prev){
    if(index == size) return prev;

    ListNode *temp = new ListNode(arr[index]);
    temp->next = prev;

    return CreateLinkedList(arr, index + 1, size, temp);
}

ListNode* RemoveEveryNode(ListNode *head, int k){
    ListNode *current = head;
    ListNode *prev = NULL;

    int count = 1;

    if(k == 1)
        return NULL;

    while(current){
        if(k == count){
            prev->next = current->next;
            delete current;
            current = prev->next;
            count = 1;
        }else{
            prev = current;
            current = current->next;
            count++;
        }
    }

    return head;
}

int main(){
    int arr[7] = {100, 200, 300, 400, 500, 600, 700};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 2;

    ListNode *head = CreateLinkedList(arr, 0, 7, NULL);

    head = RemoveEveryNode(head, target);

    ListNode *current = head;

    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}