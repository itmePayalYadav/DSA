#include <vector>
#include <iostream>
using namespace std;

class ListNode {
public:
    int value;
    ListNode *next;

    ListNode(int data) {
        value = data;
        next = NULL;
    }
}; 

ListNode* CreateLinkedList(int arr[], int index, int size, ListNode *prev) {
    if (index == size) return prev;

    ListNode *temp = new ListNode(arr[index]);
    temp->next = prev;

    return CreateLinkedList(arr, index + 1, size, temp);
}

int main() {
    vector<int> ans;

    int arr[7] = {100, 200, 300, 400, 500, 600, 700};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode *head = CreateLinkedList(arr, 0, n, NULL);

    ListNode *temp = head;

    while (temp != NULL) {
        ans.push_back(temp->value);  
        temp = temp->next;
    }

    int i = ans.size() - 1;

    temp = head;

    while (temp){
        temp->value = ans[i];
        i--;
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
