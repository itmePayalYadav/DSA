#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 7, 11, 15, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout << arr[i] << " + " << arr[j] << " = " << target << endl;
                break;
            }
        }
    }
}