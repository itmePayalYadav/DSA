#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 4;

    int start = 0;
    int end = n - 1;
    bool found = false;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            cout << "Target value " << arr[mid] << " found at index " << mid << endl;
            found = true;
            break; 
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    if (!found) {
        cout << "Target not found in the array." << endl;
    }
}
