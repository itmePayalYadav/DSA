#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int height[] = {2, 3, 4, 2, 6, 5, 4, 5, 3};
    int n = sizeof(height) / sizeof(height[0]);

    vector<int> right(n, n); 
    vector<int> left(n, -1); 
    stack<int> S1, S2;

    for (int i = 0; i < n; i++) {
        while (!S1.empty() && height[S1.top()] > height[i]) {
            right[S1.top()] = i;
            S1.pop();
        }
        S1.push(i);
    }

    for (int i = n - 1; i >= 0; i--) {
        while (!S2.empty() && height[S2.top()] > height[i]) {
            left[S2.top()] = i;
            S2.pop();
        }
        S2.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = max(ans, height[i] * (right[i] - left[i] - 1));
    }

    cout << "Largest Rectangle in histogram: " << ans << endl;
}
