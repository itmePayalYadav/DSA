#include<stack>
#include<queue>
#include<iostream>
using namespace std;

int main(){
    queue<int> q;
    stack<int> st;

    q.push(2);
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(11);

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}
