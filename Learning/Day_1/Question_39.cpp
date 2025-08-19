#include<iostream>
using namespace std;

int main(){
  int arr[] = {
    1, 0, 1, 0, 1, 0,
    1, 1, 0, 0, 1, 0, 
    1, 1, 0, 0, 1, 0,  
    0, 1, 1, 0, 1, 0, 
    0, 1, 1, 0, 1, 0,
    1, 1, 0, 0, 1, 0,  
    0, 1, 1, 0, 1, 0,
    0, 1, 0, 1, 1, 0,
    1, 0, 1, 1, 0, 0, 
    1, 0,  
    0, 1, 1, 0, 1, 0,};

    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int j = n - 1;

    while (i < j){
        if(arr[i] > arr[j]){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }else if(arr[i] < arr[j]){
            j--;
        }else{
            i++;
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}