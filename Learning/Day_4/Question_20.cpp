#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    int arr[9] = {8, 6, 4, 7, 4, 9, 10, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> S;
    vector<int> ans(n, -1);

    for (int i = n - 1; i >= 0; i--){
        while(!S.empty() && arr[S.top()] < arr[i]){
            S.pop();
        }
        if(!S.empty() ){
            ans[i] = arr[S.top()];
        }
        S.push(i);
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

}