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

ListNode *RemoveNthFromEnd(ListNode* head, int n) {
    int count = 0;
    ListNode *temp = head;
    while (temp){
        count++;
        temp = temp->next;
    }

    count-=n;
    if(count == 0){
        temp = head;
        head = head->next;
        delete temp;
    }

    ListNode *current = head;
    ListNode *prev = NULL;

    while(count--){
        prev = current;
        current = current->next;
    }

    prev->next = current->next;
    delete current;

    return head;
};

int main(){
    int arr[7] = {100, 200, 300, 400, 500, 600, 700};
    int target = 1;

    ListNode *head = CreateLinkedList(arr, 0, 7, NULL);

    head = RemoveNthFromEnd(head, target);

    ListNode *current = head;

    while(current){
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}