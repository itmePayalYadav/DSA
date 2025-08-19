#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 2, 2, 4, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int end = 0;
    int start = 0;
    int days = 3;

    for (int i = 0; i < n; i++){
        start = max(start, arr[i]); 
        end += arr[i];            
    }

    while (start <= end){
        int mid = start + (end - start) / 2;

        int package = 0;
        int weight = 1;

        for (int i = 0; i < n; i++){
            if (package + arr[i] <= mid){
                package += arr[i];
            } else {
                weight++;
                package = arr[i];
            }
        }

        if(weight <= days){
            end = mid - 1; 
        }
        else{
            start = mid + 1; 
        }
    }

    cout << "Ship Package = " << start << endl;
}
