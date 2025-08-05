#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 7, 11, 15, 27};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 22;
    bool found = false;

    for (int i = 0; i < n - 1; i++){
        int x = target - arr[i];
        int start = i + 1;
        int end = n - 1;

        while (start <= end){
            int mid = start + (end - start) / 2;

            if(arr[mid] == x){
                cout << arr[i] << " + " << arr[mid] << " = " << target << endl;
                found = true;
                break;
            }
            else if(arr[mid] > x){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        if (found) break;  
    }

    if (!found){
        cout << "No pair found that adds to " << target << endl;
    }

    return 0;
}
