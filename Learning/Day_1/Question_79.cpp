#include<iostream>
using namespace std;

void Rotate90(int matrix[3][3], int n){
    int temp[3][3];

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            temp[col][n - 1 - row] = matrix[row][col];
        }
    }

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            matrix[row][col] = temp[row][col];
        }
    }
}

int main(){
    int k;
    cout << "Enter the number of 90-degree rotations: "; 
    cin >> k;

    int matrix[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    int n = 3;  
    int K = k % 4;  

    while (K--){
        Rotate90(matrix, n);
    }

    cout << "Rotated Matrix:\n";
    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
