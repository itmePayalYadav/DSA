#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int arr[8] = {6, 10, 7, 4, 8, 9, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> S;
    vector<int> ans(n, -1);

    for (int i = 2 * n - 1; i >= 0; i--) {
        int idx = i % n;

        while (!S.empty() && arr[S.top()] <= arr[idx]) {
            S.pop();
        }

        if (!S.empty()) {
            ans[idx] = arr[S.top()];
        }

        S.push(idx);
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}
