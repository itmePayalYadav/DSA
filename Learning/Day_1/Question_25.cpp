#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1, 4, 6, 8, 10, 14, 16, 18, 20, 24};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    int target = 7;

    int index = -1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            index = mid;
            break;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            index = mid;
            end = mid - 1;
        }
    }

    if (index != -1)
        cout << "Ceiling of " << target << " is " << arr[index] << " at index " << index << endl;
    else
        cout << "No ceiling found for target " << target << endl;
}