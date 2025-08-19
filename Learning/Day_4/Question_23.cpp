#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    int arr[8] = {4, 13, 11, 5, 9, 7, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> S;
    vector<int> ans(n, -1);

    for (int i = n - 1; i >= 0; i--){
        while(!S.empty() && arr[S.top()] > arr[i]){
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