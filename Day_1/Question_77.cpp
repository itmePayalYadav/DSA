#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(matrix) / sizeof(matrix[0]);

    for (int i = 0; i < n; i++){
        int start = 0, end = n - 1;
        while (start <= end){
            swap(matrix[start][i], matrix[end][i]);
            start++, end--;
        }
    }

    for (int i = 0; i < n; i++){
        int start = 0, end = n - 1;
        while (start < end){
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}