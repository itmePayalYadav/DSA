#include<iostream>
using namespace std;

int main(){
    int arr[8] = {3, 4, -2, 5, 8, 20, -10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool found = false;

    for (int i = 0; i < n - 1; i++){
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++){
            sum1 += arr[j];
        }
        for (int k = i+1; k < n; k++){
            sum2 += arr[k];
        }
        if(sum1 == sum2){
            cout << "Equilibrium found at index " << i << " with sum: " << sum1 << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No equilibrium point found." << endl;
    }

    return 0;
}
