#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the position (n) to find the nth Fibonacci number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }


    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;
    
    for (int i = 2; i < n; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    
    cout << "Fibonacci number at position " << n << " is: " << arr[n - 1] << endl;

    return 0;
}