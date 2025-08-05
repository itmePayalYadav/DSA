#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = arr[0];
    int end = arr[n-1] - arr[0];

    int K = 3;
    int ans = -1;

    while (start <= end){
        int mid = start + (end - start) / 2;
        int cows = 1;
        int pos = arr[0];

        for (int i = 0; i < n; i++){
            if(pos + mid <= arr[i]){
                cows++;
                pos = arr[i];
            }
        }

        if(cows >= K){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Maximum minimum distance to place aggressive cows is: " << ans << endl;
}