#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2, 7, 11, 15, 27};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    int target = 22;

    while (start < end){  
        int sum = arr[start] + arr[end];

        if(sum == target){
            cout << arr[start] << " + " << arr[end] << " = " << target << endl;
            break;
        }
        else if(sum > target){
            end--;
        }
        else{
            start++;
        }
    }

    return 0;
}
