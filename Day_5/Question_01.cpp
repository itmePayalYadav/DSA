#include <iostream>
using namespace std;

class QUEUE {
public:
    int *arr;
    int front, rear;
    int size;

    QUEUE(int n) {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    ~QUEUE() {
        delete[] arr;
    }

    bool IsEmpty() {
        return front == -1;
    }

    bool IsFull() {
        return rear == size - 1;
    }

    void push(int x) {
        if (IsFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        if (IsEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
    }

    void pop() {
        if (IsEmpty()) {
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
        if (IsEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (IsEmpty()) {
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
    QUEUE q(5);

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
