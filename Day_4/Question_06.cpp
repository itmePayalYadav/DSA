#include<stack>
#include<iostream>
using namespace std;

int main(){
    int x = 2;

    stack<int> st;

    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(8);
    st.push(7);

    stack<int>temp;

    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    st.push(x);

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    cout << "Stack elements (top to bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
