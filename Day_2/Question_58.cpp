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

int intersectionPoint(Node *head1, Node *head2){
    if(!head1 || !head2) return -1;

    // Step 1: Find tail of first list
    Node *current1 = head1;
    while(current1->next){
        current1 = current1->next;
    }

    // Step 2: Temporarily connect tail of list1 to head2
    current1->next = head2;

    // Step 3: Detect cycle using Floyd’s algorithm
    Node *fast = head2;
    Node *slow = head2;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }

    // Step 4: No cycle => no intersection
    if(!fast || !fast->next){
        current1->next = NULL; // restore list
        return -1;
    }

    // Step 5: Find start of cycle (intersection)
    slow = head2;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    // Step 6: Restore original list and return value
    current1->next = NULL;
    return slow->value;
}

int main(){
    // Example test
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

    int intersection = intersectionPoint(head1, head2);
    if(intersection != -1)
        cout << "Intersection at value: " << intersection << endl;
    else
        cout << "No intersection found" << endl;

    return 0;
}
