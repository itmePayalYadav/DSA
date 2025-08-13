#include<iostream>
using namespace std;

class Node{
public:
    int value;
    Node *next, *prev;

    Node(int value){
        this->value = value;
        next = prev = NULL;
    }
};

class Dequeue{
public:
    Node *front, *rear;

    Dequeue(){
        this->front = this->rear = NULL;
    }

    void push_front(int x){
        if(front == NULL){
            front = rear = new Node(x);
            return;
        }else{
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            return;
        }
    };

    void push_back(int x) {
        if(front == NULL){
            front = rear = new Node(x);
            return;
        }else{
            Node *temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            return;
        }
    };

    void pop_front() {
        if(front == NULL){
            cout << "Underflow\n";
            return;
        }else{
            Node *temp = front;
            front = front->next;
            delete temp;
            if(front){
                front->prev = NULL;
            }else{
                rear = NULL;
            }
        }
    };

    void pop_back() {
        if(front == NULL){
            return;
        }else{
            Node *temp = rear;
            rear = rear->prev;
            delete temp;
            if(rear){
                rear->next = NULL;
            }else{
                front = NULL;
            }
        }
    };

    int start() {
        if(front == NULL){
            return -1;
        }else{
            return front->value;
        }
    };

    int end(){
        if(front == NULL){
            return -1;
        }else{
            return rear->value;
        }
    }
};

int main() {
    Dequeue dq;

    // Push at front
    dq.push_front(10);
    dq.push_front(20);

    // Push at back
    dq.push_back(30);
    dq.push_back(40);

    cout << "Front: " << dq.start() << endl; 
    cout << "Rear: " << dq.end() << endl;   

    // Pop from front
    dq.pop_front();
    cout << "After pop_front, Front: " << dq.start() << endl; 

    // Pop from back
    dq.pop_back();
    cout << "After pop_back, Rear: " << dq.end() << endl; 

    // Pop until empty
    dq.pop_front();
    dq.pop_front(); 
    dq.pop_back();  

    return 0;
}
