#include<iostream>
using namespace std;

// Implement the solution using an array
class Stack {
    int *arr;
    int size;
    int top;

    public:
        bool flag;

        // Build the constructor
        Stack(int s)
        {
            size = s;
            top = -1;
            arr = new int[s];
            flag = 1;
        }

    // Push
    void push(int value){
        if(top == size - 1){
            cout << "Stack Overflow\n";
            return;
        }else{
            top++;
            arr[top] = value;
            flag = 0;
        }
    }

    // Pop
    void pop(){
        if(top == -1){
            cout << "Stack Underflow\n";
            return;
        }else{
            top--;
            if(top == -1){
                flag = 1;
            }
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
    int value = S.IsEmpty();
    if(S.flag == 0)
    cout << value << endl;
}