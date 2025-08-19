#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    Node *Head = new Node(10);
    Head->next = new Node(20);
    Head->next->next = new Node(30);

    Node *original = Head;
    cout << "Original List: ";
    while (original) {
        cout << original->data << " ";
        original = original->next;
    }
    cout << endl;

    Node *temp = Head;
    Head = Head->next;
    delete temp;

    temp = Head;
    cout << "After Deleting Start Node: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << endl;

    return 0;
}
