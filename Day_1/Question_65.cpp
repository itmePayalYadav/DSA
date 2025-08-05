#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = {
        {3, 4, 7, 8},
        {2, 8, 3, 9},
        {5, 4, 2, 2},
        {7, 3, 0, 8},
    };

    int sum1 = 0; 
    int sum2 = 0; 

    for (int i = 0; i < 4; i++){
        sum1 += arr[i][i];
        sum2 += arr[i][3 - i];
    }

    cout << "Main diagonal sum: " << sum1 << endl;
    cout << "Secondary diagonal sum: " << sum2 << endl;
}