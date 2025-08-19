#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int height[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(height) / sizeof(height[0]);

    int index;
    int ans = 0;
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && height[st.top()] > height[i]) { 
            index = st.top();
            st.pop();
            if (!st.empty()) {
                ans = max(ans, height[index] * (i - st.top() - 1));
            } else {
                ans = max(ans, height[index] * i); 
            }
        }
        st.push(i);
    }

    while (!st.empty()) {
        index = st.top();
        st.pop();
        if (!st.empty()) {
            ans = max(ans, height[index] * (n - st.top() - 1));
        } else {
            ans = max(ans, height[index] * n);
        }
    }

    cout << "Largest Rectangle Area: " << ans << endl;
}
