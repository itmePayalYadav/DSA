#include<iostream>
using namespace std;

int main(){
    int arr[6] = {6, 11, 7, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int j = n - 1;

    while (i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}