#include <vector>
#include <climits>
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 15, 50, 10, 70, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans(n, INT_MAX); 

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j + i < n; j++) {
            int num = INT_MIN; 
            for (int k = j; k < j + i + 1; k++) {
                num = max(num, arr[k]); 
            }
            ans[i] = min(ans[i], num); 
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
