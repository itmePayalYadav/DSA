#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int temp[3][3];

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            temp[col][2 - row] = matrix[row][col];
        }
    }

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            cout << temp[row][col] << " ";
        }
        cout << endl;
    }
}
