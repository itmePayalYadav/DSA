#include<queue>
#include<iostream>
using namespace std;

int main(){
    int arr[] = {0, 0, 1, 0, 0, 1, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int flip = 0;
    queue<int> q;

    for (int i = 0; i < n; i++){
        if(!q.empty() && q.front() < i){
            q.pop();
        }
        if(q.size() % 2 == arr[i]){
            if(i + k - 1 >= n){
                return 0;
            }
            q.push(i + k - 1);
            flip++;
        }
    }

    cout << "Total Flip is " << flip << "\n";

}