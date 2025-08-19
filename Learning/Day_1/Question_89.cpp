#include<vector>
#include<iostream>
using namespace std;

int main(){
    int arr[8] = {3, 2, 5, 3, 1, 2, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> temp(n, 0);

    for (int i = 0; i < n; i++){
        arr[i]--;
    }

    for (int i = 0; i < n; i++){
        if (arr[i] >= 0 && arr[i] < n) {
            temp[arr[i]]++;
        }
    }
    
    for (int i = 0; i < n; i++){
        cout << "Value " << (i + 1) << " occurs: " << temp[i] << " times" << endl;
    }

    return 0;
}