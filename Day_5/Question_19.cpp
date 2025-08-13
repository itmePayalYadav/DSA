#include<vector>
#include<climits>
#include<iostream>
using namespace std;

int main(){
    int arr[10] = {4, 3, 7, 5, 2, 3, 1, 2, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 4;
    vector<int> ans;

    for (int i = 0; i <= n - k; i++){
        int total = INT_MIN;
        for (int j = i; j < i + k; j++){
            total = max(total, arr[j]);
        }
        ans.push_back(total);
    }

    for (int a: ans){
        cout << a << " ";
    }
}