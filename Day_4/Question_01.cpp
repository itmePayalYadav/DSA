#include<iostream>
using namespace std;

// Implement the solution using an array
class Stack {
    int *arr;
    int size;
    int top;

    public:

    // Build the constructor
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }

    // Push
    void push(int value){
        if(top == size - 1){
            cout << "Stack Overflow\n";
            return;
        }else{
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the stack\n";
        }
    }

    // Pop
    void pop(){
        if(top == -1){
            cout << "Stack Underflow\n";
            return;
        }else{
            top--;
            cout << "Popped " << arr[top + 1] << " from the stack\n";
        }
    }

    // Peek
    int peek(){
        if(top == -1){
            cout << "Stack is empty\n";
            return -1;
        }else{
            return arr[top];
        }
    }   

    // IsEmpty
    bool IsEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    // IsSize 
    int IsSize(){
        return top + 1;
    }
};

int main(){
    Stack S(5);

    cout << "=== Pushing elements ===\n";
    for (int i = 1; i <= 5; i++) {
        S.push(i);
    }

    cout << "\n=== Trying to push on full stack ===\n";
    S.push(6); 

    cout << "\n=== Top element (peek) ===\n";
    cout << "Top: " << S.peek() << "\n";

    cout << "\n=== Current size ===\n";
    cout << "Size: " << S.IsSize() << "\n";

    cout << "\n=== Popping elements ===\n";
    while (!S.IsEmpty()) {
        S.pop();
    }

    cout << "\n=== Trying to pop from empty stack ===\n";
    S.pop();

    return 0;
}