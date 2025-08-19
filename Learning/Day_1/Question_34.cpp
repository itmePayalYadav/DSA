#include<iostream>
using namespace std;

int main(){
    int arr[] = {5, 10, 30, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int K = 3;
    int end = 0;
    int start = 0;
    int ans = -1;

    for (int i = 0; i < n; i++){
        if(arr[i] > start){
            start = arr[i];
        }
        end += arr[i];
    }

    while (start <= end){
        int mid = start + (end - start) / 2;
        int wall = 0;
        int painter = 1;
        for (int i = 0; i < n; i++){
            wall += arr[i];
            if(wall > mid){
                wall = arr[i];
                painter++;
            }
        }
        if(painter <= K){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    cout << "Painter Partition = " << ans << endl;
}