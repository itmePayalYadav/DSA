#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int row = 0; row < 3; row++){
        for (int col = 2; col >= 0; col--){
            cout << matrix[col][row] << " ";
        }
        cout << endl;
    }
}