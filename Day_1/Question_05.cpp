#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[7] = {2, 6, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = INT_MIN;
    int ans = INT_MIN;

    for (int i = 0; i < 7; i++){
        if(arr[i] > max){
            ans = max;
            max = arr[i];
        }
        else if (arr[i] > ans && ans != max){
            ans = arr[i];
        }
    }

    if (ans == INT_MIN){
        cout << "There is no distinct second maximum value.\n";
    } else {
        cout << "Second Maximum Value is " << ans << endl;
    }

    return 0;
}
