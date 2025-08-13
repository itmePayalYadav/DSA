#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node *next;

    Node(int value) {
        this->value = value;
        next = NULL;
    };
};

class Queue {
    Node *front;
    Node *rear;

    public:
    Queue() {
        this->front = this->rear = NULL;
    };

    bool isEmpty(){
        return front == NULL;
    };

    void push(int x){
        if(isEmpty()){
            front = new Node(x);
            rear = front;
            return;
        }else{
            rear->next = new Node(x);
            rear = rear->next;
        }
    }

    void pop() {
        if(isEmpty()){
            cout << "Queue Underflow.";
            return;
        }else{
            Node *temp = front;
            front = front->next;
            if(front == NULL){
                rear = NULL;
            }
            delete temp;
        }
    };

    int start(){
        if(isEmpty()){
            cout << "Queue Empty.";
            return -1;
        }else{
            return front->value;
        }
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.start() << endl; 

    q.pop();
    cout << "Front after pop: " << q.start() << endl; 

    q.pop();
    q.pop();

    q.pop();
}