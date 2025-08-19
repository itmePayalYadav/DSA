#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    int ans = arr[0];

    while (start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            ans = arr[mid];
            end = mid - 1;
        }
    }

    if(!ans){
        cout << "Value not found" << endl;
    }else{
        cout << "Search Rotate array value is " << ans << endl;
    }

    return 0;
}
