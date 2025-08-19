#include<iostream>
using namespace std;

int findKthMissing(int arr[], int n, int k){
    int start = 0;
    int end = n - 1;
    int ans = n;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] - (mid + 1) >= k){
            ans = mid;
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
    }
    return ans + k;
}

int main(){
    int arr[] = {2, 3, 4, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    int result = findKthMissing(arr, n, k);
    cout << "K-th missing number is " << result << endl;

    return 0;
}
