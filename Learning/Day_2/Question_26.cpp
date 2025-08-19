#include<vector>
#include<iostream>
using namespace std;

class ListNode {
public:
    int value;
    ListNode *next;

    ListNode(int value){
        this->value = value;
        next = NULL;
    };
};

ListNode *CreateLinkedList(int arr[], int index, int size, ListNode * prev) {
    if(index == size) return prev;

    ListNode *temp = new ListNode(arr[index]);
    temp->next = prev;

    return CreateLinkedList(arr, index+1, size, temp);
}

bool CheckPalindrom(ListNode *head){
    vector<int> palindrom;

    ListNode* temp = head;
    while(temp){
        palindrom.push_back(temp->value);
        temp = temp->next;
    }

    int i = 0;
    int j = palindrom.size() - 1;

    while(i < j){
        if(palindrom[i] != palindrom[j])return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    int arr[6] = {100, 200, 300, 400, 500, 600};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode *head = CreateLinkedList(arr, 0, n, NULL);

    int isPalindrom = CheckPalindrom(head);

    if(isPalindrom){
        cout << "Yes it is Palindrom" << endl;
    }else{
        cout << "Please try again another Linked List" << endl;
    }
}