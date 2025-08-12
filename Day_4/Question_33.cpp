#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    stack<int> s1; 
    stack<int> s2; 

    int getMin() {
        if(s2.empty())
            return -1;
        return s2.top();
    }

    void push(int x){
        if(s1.empty()){
            s1.push(x);
            s2.push(x);
        }else{
            s1.push(x);
            s2.push(min(s2.top(), x));
        }
    }

    int pop(){
        if(s1.empty()){
            cout << "No value found\n";
            return -1;
        }
        int element = s1.top();
        s1.pop();
        s2.pop();
        return element;
    }
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
}
