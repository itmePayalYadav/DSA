#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pos = start;
    for (int i = start; i < end; i++){
        if(arr[end] <= arr[i]){
            swap(arr[i], arr[pos++]);
        }
    }
    swap(arr[pos], arr[end]);
    return pos;
}

void quickSort(int arr[], int start, int end){
    if (start >= end) return; 

    int pivot = partition(arr, start, end);

    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}

int main(){
    int arr[10] = {6, 4, 2, 8, 3, 7, 11, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}