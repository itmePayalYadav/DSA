#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(matrix) / sizeof(matrix[0]);

    for (int row = 0; row < n - 1; row++){
        for (int col = row + 1; col < n; col++){
            swap(matrix[row][col], matrix[col][row]);
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n / 2; j++){
            swap(matrix[i][j], matrix[i][n - 1 - j]);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}