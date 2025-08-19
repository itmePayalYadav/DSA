#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(matrix) / sizeof(matrix[0]);

    for (int row = n - 1; row >= 0; row--){
        for (int col = n - 1; col >= 0; col--){
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}