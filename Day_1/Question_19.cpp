#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    vector<int> temp(end - start + 1);

    int left = start;
    int right = mid + 1;
    int index = 0;

    while (left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp[index++] = arr[left++];
        }else{
            temp[index++] = arr[right++];
        }
    }
    
    while (left <= mid){
        temp[index++] = arr[left++];
    }
    
    while (right <= end){
        temp[index++] = arr[right++];
    }

    for (int x = 0; x < temp.size(); x++){
        arr[start + x] = temp[x];
    }
}

void mergeSort(int arr[], int start, int end){
    if(start == end) return;

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+ 1, end);

    merge(arr, start, mid, end);
}

int main(){
    int arr[10] = {6, 3, 5, 2, 2, 8, 1, 3, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}