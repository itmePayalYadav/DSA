#include<iostream>
using namespace std;

int main(){
    int arr[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    int first = -1;
    int last = -1;

    int target = 8;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    start = 0;
    end = n - 1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout << "[" << first << ", " << last << "]" << endl;
}