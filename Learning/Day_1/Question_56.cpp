#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1, 4, 6, 8, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 24;
    bool found = false;

    for (int i = 0; i < n - 2; i++){
        int ans = target - arr[i];
        int start = i + 1;
        int end = n - 1;

        while (start < end){
            if (arr[start] + arr[end] == ans){
                cout << "Triplet found: " << arr[i] << ", " << arr[start] << ", " << arr[end] << endl;
                found = true;
                start++;
                end--;
            }
            else if (arr[start] + arr[end] > ans){
                end--;
            }
            else {
                start++;
            }
        }
    }

    if (!found){
        cout << "No triplet found that adds up to " << target << "." << endl;
    }

    return 0;
}

