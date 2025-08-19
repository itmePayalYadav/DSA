#include<queue>
#include<iostream>
using namespace std;

void display(queue<int> q) {
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
};

int main(){
    int arr[7] = {2, 3, 1, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    queue<int> q;
    for (int i = 0; i < k - 1; i++){
        q.push(arr[i]);
    }

    for (int i = k - 1; i < n; i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }

    return 0;
}
