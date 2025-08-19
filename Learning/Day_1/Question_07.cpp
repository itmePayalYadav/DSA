#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 5, 6};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int total = 0;

    int count = (n + 1) * (n + 2) / 2;

    for (int i = 0; i < n; i++){
        total += arr[i];
    }

    cout << "Missing Number Value is " << count - total << endl;

    return 0;
}
