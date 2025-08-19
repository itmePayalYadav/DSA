#include <stack>
#include <queue>
#include <iostream>
using namespace std;

int main() {
    stack<int> st;
    queue<int> q;
    
    int k = 6;

    q.push(2);
    q.push(5);
    q.push(7);
    q.push(11);
    q.push(13);
    q.push(17);
    q.push(19);

    int n = q.size();

    for (int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}
