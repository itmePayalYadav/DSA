#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    int price[7] = {100, 80, 55, 70, 60, 75, 85};
    int n = sizeof(price) / sizeof(price[0]);

    stack<int> S;
    vector<int> ans(n, 1);

    for (int i =  n - 1; i >= 0; i--){
        while(!S.empty() && price[S.top()] < price[i]){
            ans[S.top()] = S.top() - i;
            S.pop();
        }
        S.push(i);
    }

    while(!S.empty()){
        ans[S.top()] = S.top() + 1;
        S.pop();
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}