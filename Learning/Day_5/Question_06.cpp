#include<queue>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    queue<int> q;
    vector<int> ans;

    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(5);

    while(!q.empty()){
        cout << q.front() << " ";
        ans.push_back(q.front());
        q.pop();
    }

    for (int x : ans) {
        q.push(x);
    }
}