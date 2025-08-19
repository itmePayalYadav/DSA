#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> Right(n, n);
    vector<int> Left(n, -1);
    stack<int> st;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && heights[st.top()] > heights[i]) {
            Right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) st.pop();

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && heights[st.top()] > heights[i]) {
            Left[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    for (int i = 0; i < n; i++) {
        ans = max(ans, heights[i] * (Right[i] - Left[i] - 1));
    }

    return ans;
}

int main() {
    int arr[] = {2, 1, 5, 6, 2, 3};
    vector<int> heights(arr, arr + sizeof(arr) / sizeof(arr[0]));

    int maxArea = largestRectangleArea(heights);
    cout << "Largest Rectangle Area: " << maxArea << endl;
}
