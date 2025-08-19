#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1, 4, 6, 8, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 24;

    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
            int find = target - arr[i] - arr[j];
            int start = j + 1;
            int end = n - 1;
            while (start < end){
                int sum = arr[i] + arr[j] + arr[start];
                if (sum == target){
                    cout << "Triplet found: " << arr[i] << ", " << arr[j] << ", " << arr[start] << endl;
                    start++; 
                }
                else if(sum < target){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
    }
}