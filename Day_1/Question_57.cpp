#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 5, 1, 0, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 7;
    bool found = false;

    for (int i = 0; i < n - 3; i++){
        for (int j = i + 1; j < n - 2; j++){
            for (int k = j + 1; k < n - 1; k++){
                for (int x = k + 1; x < n; x++){
                    if (arr[i] + arr[j] + arr[k] + arr[x] == target){
                        cout << "Quadruplet found: " << arr[i] << ", " << arr[j] << ", " << arr[k] << ", " << arr[x] << endl;
                        found = true;
                        break;
                    }
                }
            }
        }
    }

    if (!found){
        cout << "No quadruplet found for target " << target << endl;
    }

    return 0;
}
