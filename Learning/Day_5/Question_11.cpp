#include<stack>
#include<queue>
#include<iostream>
using namespace std;

class Queue{
    stack<int> s1, s2;

    public:

    bool empty(){
        return s1.empty() && s2.empty();
    };

    void push(int x) {
        s1.push(x);
    };

    int pop(){
        if(empty()){
            cout << "Queue is empty\n";
            return -1;
        }
        else if(!s2.empty()){
            int element = s2.top();
            s2.pop();
            return element;
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int element = s2.top();
            s2.pop();
            return element;
        }
    }

    int peek() {
        if(empty()){
            cout << "Queue is empty\n";
            return -1;
        }else if(!s2.empty()){
            return s2.top();
        }else {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    };
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.peek() << endl;

    cout << "Pop: " << q.pop() << endl;
    cout << "Pop: " << q.pop() << endl;
    cout << "Pop: " << q.pop() << endl;

    cout << "Pop: " << q.pop() << endl;
}
