#include<stack>
#include<queue>
#include<iostream>
using namespace std;

class Stack {
    queue<int> q1;
    queue<int> q2;

    public:
    
    bool empty() {
        return q1.empty() && q2.empty();
    };

    void push(int x) {
        if(empty()){
            q1.push(x);
        }else if(q1.empty()){
            q2.push(x);
        }else{
            q1.push(x);
        }
    };

    int pop() {
        if(empty()){
            return 0;
        }else if(q1.empty()){
            while(q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
            }
            int element = q2.front();
            q2.pop();
            return element;
        }else{
            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            int element = q1.front();
            q1.pop();
            return element;
        }
    };

    int peek() {
        if(empty()){
            return 0;
        }else if(q1.empty()){
            return q2.back();
        }else{
            return q1.back();
        }
    };
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.peek() << endl; 

    cout << "Popped: " << st.pop() << endl; 
    cout << "Popped: " << st.pop() << endl;
    cout << "Popped: " << st.pop() << endl; 
    cout << "Popped: " << st.pop() << endl; 

    return 0;
}