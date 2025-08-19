#include<iostream>
using namespace std;

int main(){
    int arr[] = {
        1, 0, 1, 0, 1, 0,
        1, 1, 0, 0, 1, 0,
        0, 1, 1, 0, 1, 0,
        0, 1, 0, 1, 1, 0,
        1, 0
    };
    int n = sizeof(arr) / sizeof(arr[0]);

    int count0 = 0;
    int count1 = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] == 0){
            count0++;
        }else{
            count1++;
        }
    }

    for (int i = 0; i < count0; i++){
        arr[i] = 0;
    }

    for (int i = count0 + 1; i < n; i++){
        arr[i] = 1;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}