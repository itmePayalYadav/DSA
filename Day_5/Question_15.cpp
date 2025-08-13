#include <queue>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int arr[8] = {2, -3, -4, -2, 7, 8, 9, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 3;
    vector<int> ans;

    queue<int> q; 

    for (int i = 0; i < k - 1; i++) {
        if (arr[i] < 0) {
            q.push(i); 
        }
    }

    for (int i = k - 1; i < n; i++) {
        if (arr[i] < 0) {
            q.push(i);
        }

        if (!q.empty() && q.front() <= i - k) {
            q.pop();
        }

        if (q.empty()) {
            ans.push_back(0);
        } else {
            ans.push_back(arr[q.front()]);
        }
    }

    for (int a : ans) {
        cout << a << " ";
    }
}
