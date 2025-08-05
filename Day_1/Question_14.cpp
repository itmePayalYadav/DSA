#include<iostream>
using namespace std;

int main(){
    int arr[5] = {7, 4, 8, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n - 2; i >= 0; i--){
        bool swapeed = 0;
        for (int j = 0; j <= i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapeed = 1;
            }
        }
        if(swapeed == 0){
            break;
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
