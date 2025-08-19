#include <iostream>
using namespace std;

class Deque {
public:
    int front, rear, size;
    int *arr;

    Deque(int n) {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void push_front(int x) {
        if (isFull()) {
            cout << "Overflow\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + size) % size;
        }
        arr[front] = x;
    }

    void push_back(int x) {
        if (isFull()) {
            cout << "Overflow\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "Underflow\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    void pop_back() {
        if (isEmpty()) {
            cout << "Underflow\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + size) % size;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << "\n";
    }
};

int main() {
    Deque dq(5);

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    dq.pop_front();

    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50); 

    dq.pop_back();

    return 0;
}
