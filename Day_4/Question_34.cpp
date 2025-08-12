#include<stack>
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    stack<int> s1; 

    void push(int x){
        if(s1.empty()){
            s1.push(x * 101 + x);
        }else{
            s1.push(x * 101 + min(x, s1.top() % 101));
        }
    };

    int pop() {
        if(s1.empty()){
            return -1;
        }else{
            int element = s1.top() / 101;
            s1.pop();
            return element;
        }
    };

    int getMin() {
        if(s1.empty()){
            return -1;
        }else{
            return s1.top() % 101;
        }
    };
};

int main(){
    Solution st;

    st.push(3);
    st.push(5);
    cout << "Min: " << st.getMin() << endl;

    st.push(2);
    st.push(1);
    cout << "Min: " << st.getMin() << endl;

    st.pop();
    cout << "Min after pop: " << st.getMin() << endl;

    st.pop();
    cout << "Min after another pop: " << st.getMin() << endl;

    return 0;
};
