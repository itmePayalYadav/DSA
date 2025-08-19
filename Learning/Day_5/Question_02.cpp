#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front, rear, size;

public:
    Queue(int n) {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == size - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    int start() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.display();

    q.pop();
    q.display();

    q.push(40);
    q.push(60);
    q.display();

    q.pop();
    q.pop();
    q.display();

    cout << "Front element: " << q.start() << "\n";

    return 0;
}
