#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int largestRectangleArea(vector<int>heights) {
    int n = heights.size();
    vector<int> Right(n, n);
    vector<int> Left(n, -1);
    stack<int> st;

    int ans = 0;

    for (int i = 0; i < n; i++){
        while (!st.empty() && heights[st.top()] > heights[i]) {
            Right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) st.pop();

    for (int i = n - 1; i >= 0; i--){
        while (!st.empty() && heights[st.top()] > heights[i]) {
            Left[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) st.pop();
    
    for (int i = 0; i < n; i++) {
        ans = max(ans, heights[i] * (Right[i] - Left[i] - 1));
    }

    return ans;

};

int main() {
    vector<vector<int>> matrix = {
        {1, 0, 0, 0, 0},
        {1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> height(cols, 0); 

    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            height[row] += matrix[col][row];
        }
    }

    cout << "Largest Rectangle Area: " << largestRectangleArea(height) << endl;
}
