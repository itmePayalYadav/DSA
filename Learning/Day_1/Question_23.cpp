#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 5, 7, 11, 17, 18, 19, 23, 27, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    int target = 19;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            cout << "Target Value is " << arr[mid] << " " << endl;
            break;
        }
        else if (arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
}