#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;
    int ans = arr[0];

    int target = 1;

    while (start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            cout << "Searching in Rotated array " << mid << endl;
            break;
        }
        else if(arr[mid] >= arr[0]){
            if(arr[start] <= target && arr[mid] >= target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else {
            if(arr[mid] <= target && arr[end] >= target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
}