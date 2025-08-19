#include <vector>
#include <iostream>
using namespace std;

int main() {
    int arr[9] = {7, 9, 12, 10, 14, 8, 3, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans(n, -1); 

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[i]) {
                ans[i] = arr[j];
                break; 
            }
        }
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}
