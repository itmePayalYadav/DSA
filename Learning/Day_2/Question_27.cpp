#include<iostream>
using namespace std;

class ListNode {
public:
    int value;
    ListNode* next;

    ListNode(int value){
        this->value = value;
        next = NULL;
    }
};

ListNode* CreateListNode(int arr[], int index, int size, ListNode* prev){
    if(index == size) return prev;

    ListNode *temp = new ListNode(arr[index]);
    temp->next = prev;

    return CreateListNode(arr, index + 1, size, temp);
};

bool CheckPalindrom(ListNode *head){
    if (!head || !head->next) return true;

    ListNode *temp = head;

    int count = 0;

    while(temp){
        count++;
        temp = temp->next;
    }

    count /= 2;

    ListNode *current = head;
    ListNode *prev = NULL;

    while(count--){
        prev = current;
        current = current->next;
    }

    prev->next = NULL;
    ListNode *front = NULL;
    prev = NULL;

    ListNode *reversed = NULL;
    while (current) {
        front = current->next;
        current->next = reversed;
        reversed = current;
        current = front;
    }

    ListNode *head1 = head;
    ListNode *head2 = reversed;

    while(head1){
        if(head1->value != head2->value){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    return true;
};

int main(){
    int arr[5] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode *head = CreateListNode(arr, 0, n, NULL);

    if (CheckPalindrom(head)) {
    cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}