#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    int arr[9] = {8, 6, 4, 7, 4, 9, 10, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans(n, -1);

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                ans[i] = arr[j];
                break;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;
}