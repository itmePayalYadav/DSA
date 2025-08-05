#include<iostream>
using namespace std;

int main(){
    int arr[8] = {3, 4, -2, 5, 8, 20, -10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total_sum = 0;

    for (int i = 0; i < n; i++){
        total_sum += arr[i];
    }

    int prefix = 0;
    int ans = 0;

    for (int i = 0; i < n - 1; i++){
        prefix += arr[i];
        ans = total_sum - prefix;

        if(prefix == ans){
            cout << "Yes, it is possible at index " << i << endl;
            break;
        }
    }
}