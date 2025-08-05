#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {9, 5, 8, 12, 2, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int current_diff = 0;
    int max_diff = INT_MIN;

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            current_diff = arr[j] - arr[i];
            if(current_diff > max_diff){
                max_diff = current_diff;
            }
        }
    }

    cout << "Max Difference between 2 element is " << max_diff << " " << endl;
}