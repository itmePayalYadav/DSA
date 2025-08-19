#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node *next;

    Node(int value) {
        this->value = value;
        next = NULL;
    }
};

class Stack {
    Node *top;
    int size;
public:
    Stack(){
        top = NULL;
        size = 0;
    }

    void push(int value){
        Node *temp = new Node(value);
        if(temp == NULL){
            cout << "Stack Overflow\n";
            return;
        }else{
            temp->next = top;
            top = temp;
            size++;
            cout << "Pushed " << value << " into the stack\n" << endl;
        }
    }

    void pop(){
        if(top == NULL){
            cout << "Stack Underflow\n";
            return;
        }
        else{
            Node *temp = top;
            cout << "Popped " << top->value << " from the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }

    int peek(){
        if(top == NULL){
            cout << "Stack is empty\n";
            return -1;
        }else{
            return top->value;
        }
    }

    bool IsEmpty(){
        return top == NULL;
    }

    int getSize(){
        return size;
    }
    void display() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        Node *temp = top;
        while (temp != NULL) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack S;
    
    cout << "=== Pushing elements ===\n";
    for (int i = 10; i <= 80; i += 10) {
        S.push(i);
    }

    cout << "\n=== Display stack ===\n";
    S.display();

    cout << "\n=== Top element (peek) ===\n";
    cout << "Top: " << S.peek() << endl;

    cout << "\n=== Stack size ===\n";
    cout << "Size: " << S.getSize() << endl;

    cout << "\n=== Popping elements ===\n";
    while (!S.IsEmpty()) {
        S.pop();
    }

    cout << "\n=== Trying to display empty stack ===\n";
    S.display();

    return 0;
}
