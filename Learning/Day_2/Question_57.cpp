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

Node *Detected(Node *head1, Node *head2) {
    Node *current1 = head1;
    Node *current2 = head2;

    int count1 = 0;
    int count2 = 0;

    while(current1){
        count1++;
        current1 = current1->next;
    }

    while(current2){
        count2++;
        current2 = current2->next;
    }

    current1 = head1;
    current2 = head2;

    while(count1 > count2){
        current1 = current1->next;
        count1--;
    }

    while(count1 < count2){
        current2 = current2->next;
        count2--;
    }

    while(current1 != current2){
        current1 = current1->next;
        current2 = current2->next;
    }

    if(!current1){
        cout << "No intersection found." << endl;
        return;
    }

    return current1;
};

void printIntersection(Node* intersection) {
    if (intersection)
        cout << "Intersection at node value: " << intersection->value << endl;
    else
        cout << "No intersection found." << endl;
}

int main() {

    Node* newNode;

    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);

    Node* head2 = new Node(4);
    head2->next = new Node(5);

    newNode = new Node(6);
    head1->next->next->next = newNode;
    head2->next->next = newNode;
    newNode->next = new Node(7);

    Node* intersection = Detected(head1, head2);
    printIntersection(intersection);

};