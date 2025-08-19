#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 3, 5, 10, 50, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = 1;

    int target = 45;

    while(end <= n){
        if(arr[end] - arr[start] == target){
            cout << arr[end] << " - " << arr[start] << " = " << target << endl;
            break;
        }
        else if(arr[end] - arr[start] < target){
            end++;
        }else{
            start++;
        }
    }
}