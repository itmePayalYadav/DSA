#include<iostream>
using namespace std;

int main(){
    int arr[4] = {12, 34, 67, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    int M = 2;
    int end = 0;
    int start = 0;
    
    int ans = -1;

    for (int i = 0; i < n; i++){
        if(arr[i] > start){
            start = arr[i];
        }
        end += arr[i];
    }

    while (start <= end){
        int mid = start + (end - start) / 2;
        int page = 0;
        int student = 1;

        for (int i = 0; i < n; i++){
            page += arr[i];
            if(page > mid){
                page += arr[i];
                student++;
            }
        }

        if(student <= M){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    cout << "Book Allocation " << ans << endl;
} 