#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int arr[9] = {8, 6, 4, 7, 4, 9, 10, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> S;
    vector<int> ans(n, -1);

    for (int i = 0; i < n; i++) {
        while (!S.empty() && arr[S.top()] < arr[i]) {
            ans[S.top()] = arr[i];
            S.pop();
        }
        S.push(i);
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}
