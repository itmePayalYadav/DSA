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

ListNode *ReverseLinkedList(ListNode * current, ListNode * prev) {
    if(current == NULL) return prev;
    ListNode *future = current->next;
    current->next = prev;

    return ReverseLinkedList(future, current);
};

int main(){
    int arr[7] = {100, 200, 300, 400, 500, 600, 700};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode *head = CreateLinkedList(arr, 0, n, NULL);

    ListNode *current = head;
    ListNode *prev = NULL;

    head = ReverseLinkedList(head, NULL);

    ListNode *result = head;

    while (result){
        cout << result->value << " -> ";
        result = result->next;
    }

    cout << "NULL" << endl;
}
