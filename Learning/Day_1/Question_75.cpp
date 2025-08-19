#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(matrix) / sizeof(matrix[0]);

    int temp[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            temp[n - 1 - i][n - 1 - j] = matrix[i][j];
        }
    }
    
    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            cout << temp[row][col] << " ";
        }
        cout << endl;
    }
}