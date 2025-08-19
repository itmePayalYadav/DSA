#include<iostream>
using namespace std;

int main(){
    int arr[4] = {1, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int flip = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] == 0){
            if (i + k - 1 >= n) {
                cout << "-1\n";
                return 0;
            }
            for (int j = i; j <= i + k - 1; j++){
                arr[j] = !arr[j];
            }
            flip++;
        }
    }

    cout << "Total Flip is " << flip << "\n";
};
