#include <iostream>
using namespace std;

int main(){
    int arr[11] = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        int count = 1;  
        for (int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > n / 2){
            cout << "Majority Element is: " << arr[i] << endl;
            return 0; 
        }
    }

    cout << "No Majority Element found." << endl;
    return 0;
}
