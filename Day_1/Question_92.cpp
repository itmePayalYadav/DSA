#include <iostream>
using namespace std;

int main(){
    int arr[11] = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int candidate, count = 0;

    for (int i = 0; i < n; i++){
        if(count == 0){
            count = 1;
            candidate = arr[i];
        } else {
            if(candidate == arr[i]){
                count++;
            } else {
                count--;
            }
        }
    }

    count = 0; 
    for (int i = 0; i < n; i++){
        if(arr[i] == candidate){
            count++;
        }
    }

    if(count > n / 2){  
        cout << "Majority Element is: " << candidate << endl;
    } else {
        cout << "No Majority Element found." << endl;
    }

    return 0;
}
