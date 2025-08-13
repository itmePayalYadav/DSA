#include<queue>
#include<vector>
#include<iostream>
using namespace std;

int display(queue<int> q) {
    while(!q.empty()){
        if(q.front() < 0){
            return q.front();
        }
        q.pop();
    };
    return 0;
};

int main(){
    int arr[8] = {2, -3, -4, -2, 7, 8, 9, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 3;
    queue<int> q;
    vector<int> ans;
    
    for (int i = 0; i < k-1; i++){
        q.push(arr[i]);
    }

    for (int i = k - 1; i < n; i++){
        q.push(arr[i]);
        ans.push_back(display(q));
        q.pop();
    }

    for(int a: ans){
        cout << a << " ";
    }
}
