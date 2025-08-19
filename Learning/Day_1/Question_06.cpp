#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[7] = {2, 6, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = INT_MAX;
    int ans = INT_MAX;

    for (int i = 0; i < 7; i++){
        if(arr[i] < min){
            ans = min;
            min = arr[i];
        }
        else if (arr[i] < ans && arr[i] != min){
            ans = arr[i];
        }
    }

    if (ans == INT_MAX){
        cout << "There is no distinct second minimum value.\n";
    } else {
        cout << "Second Minimum Value is " << ans << endl;
    }

    return 0;
}
