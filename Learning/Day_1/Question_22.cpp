#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 7, 11, 12, 17, 18, 23, 27, 29};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    int target = 27;

    while (start <= end){
        int mid = start + (end - start) / 2;

        cout << "Middle Value is " << mid << " " << endl;

        if(arr[mid] == target){
            break;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
}