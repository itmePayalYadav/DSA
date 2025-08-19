#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;

    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
            for (int k =  j + 1; k < n; k++){
                if(arr[i]+arr[j]+arr[k] == target){
                    cout << "We got Target" << endl;
                }
            }
        }
    }
}