#include <stack>
#include <vector>
#include <climits>
#include <iostream>
using namespace std;

int main(){
    int arr[7] = {10, 20, 15, 50, 10, 70, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans(n, INT_MIN);
    stack<int> st;

    for (int i = 0; i < n; i++){
        while(!st.empty() && arr[st.top()] >= arr[i]){ 
            int index = st.top();
            st.pop();
            int range;
            if(!st.empty()){
                range = i - st.top() - 1;
            } else {
                range = i;
            }
            ans[range - 1] = max(ans[range - 1], arr[index]);
        }
        st.push(i);
    }

    while(!st.empty()){
        int index = st.top();
        st.pop();
        int range;
        if(!st.empty()){
            range = n - st.top() - 1;
        } else {
            range = n;
        }
        ans[range - 1] = max(ans[range - 1], arr[index]);
    }

    for (int i = n - 2; i >= 0; i--){
        ans[i] = max(ans[i], ans[i + 1]);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
