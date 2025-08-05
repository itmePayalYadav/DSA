#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(matrix) / sizeof(matrix[0]);

    int temp[n][n];

    cout << endl << "Before " << endl;

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            temp[n - 1 - col][row] = matrix[row][col];
        }
    }

    cout << endl << "After " << endl;

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            cout << temp[row][col] << " ";
        }
        cout << endl;
    }
}