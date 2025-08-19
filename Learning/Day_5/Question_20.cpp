#include<deque>
#include<vector>
#include<climits>
#include<iostream>
using namespace std;

int main(){
    int arr[10] = {4, 3, 7, 5, 2, 3, 1, 2, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 4;
    deque<int>d;
    vector<int> ans;

    for (int i = 0; i < k - 1; i++){
        if(d.empty()){
            d.push_back(i);
        }else{
            while(!d.empty() && arr[i] > arr[d.back()]){
                d.pop_back();
            }
            d.push_back(i);
        }
    }

    for (int i = k - 1; i < n; i++){
        while(!d.empty() && arr[i] > arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
        if(d.front() <= i - k){
            d.pop_front();
        }
        ans.push_back(arr[d.front()]);
    }

    for (int a: ans){
        cout << a << " ";
    }
}
