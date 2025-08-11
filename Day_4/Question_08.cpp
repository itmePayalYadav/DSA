#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> arr = {2, 3, 5, -4, 6, -2, -8, 9};
    stack<int> S;

    for (int i = 0; i < arr.size(); i++){
        // Stack can be empty
        if(S.empty()){
            S.push(arr[i]);
        }

        // Non negative number
        else if(arr[i] >= 0){
            if(S.top() >= 0){
                S.push(arr[i]);
            }else{
                S.pop();
            }
        }

        // Negative number
        else {
            if(S.top() < 0){
                S.push(arr[i]);
            }else{
                S.pop();
            }
        }
    }

    vector<int> ans(S.size());

    int i = S.size() - 1;

    while(!S.empty()){
        ans[i] = S.top();
        i--;
        S.pop();
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}