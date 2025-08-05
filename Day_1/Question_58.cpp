#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 4, 6, 8, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 24;
    bool found = false;

    for (int i = 0; i < n - 3; i++){
        for (int j = i + 1; j < n - 2; j++){
            int remaining = target - arr[i] - arr[j];
            int start = j + 1;
            int end = n - 1;

            while (start < end){
                int sum = arr[start] + arr[end];
                if (sum == remaining){
                    cout << "Quadruplet found: " << arr[i] << ", " << arr[j] << ", " << arr[start] << ", " << arr[end] << endl;
                    found = true;
                    start++;
                    end--;
                }
                else if (sum < remaining){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
    }

    if (!found){
        cout << "No quadruplet found that adds up to " << target << "." << endl;
    }

    return 0;
}
