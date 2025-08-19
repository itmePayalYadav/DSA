#include<iostream>
using namespace std;

int main(){
    int arr1[2][2] = {{1, 2}, {5, 6}};
    int arr2[2][2] = {{3, 4}, {8, 2}};

    for (int row = 0; row < 2 ; row++){
        for (int col= 0; col < 2 ; col++){
            cout << arr1[row][col] + arr2[row][col] << " ";
        }
        cout << endl;
    }
}