#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5][4] = {
        {3, 4, 7, 8},
        {2, 8, 3, 9},
        {5, 4, 2, 2},
        {7, 3, 0, 8},
        {2, 8, 9, 1}
    };

    int maxSum = INT_MIN;
    int index = -1;

    for (int i = 0; i < 5; i++){
        int total = 0;
        for (int j = 0; j < 4; j++){
            total += arr[i][j];
        }
        if (total > maxSum){
            maxSum = total;
            index = i;
        }
    }

    cout << "Maximum row sum is: " << maxSum << ", at row index: " << index << endl;

    return 0;
}
