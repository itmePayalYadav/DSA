#include<iostream>
using namespace std;

int main(){
    int arr[8] = {3, 4, -2, 5, 8, 20, -10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int current_sum = 0;
    int max_sum = arr[0];

    for (int i = 0; i < n; i++){
        current_sum += arr[i];
        if(current_sum > max_sum){
            max_sum = current_sum;
        }
        if (current_sum < 0){
            current_sum = 0;
        }
    }

    cout << "Largest Sum of Contiguous Subarray is: " << max_sum << endl;
}