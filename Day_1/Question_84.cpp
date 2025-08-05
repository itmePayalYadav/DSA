#include<iostream>
using namespace std;

int main(){
    int matrix[5][5] = {4, 8, 15, 25, 60, 18, 22, 26, 42, 80, 36, 40, 45, 68, 104, 48, 50, 72, 83, 130, 70, 99, 114, 128, 170};

    int rows = sizeof(matrix) / sizeof(matrix[0]);         
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int target = 50;

    int i = 0;
    int j = cols - 1;

    while (i < rows && j >= 0){
        if(matrix[i][j] == target){
            cout << target << " at position [" << i << "][" << j << "]." << endl;
            break;
        }else if(matrix[i][j] < target){
            i++;
        }else{
            j--;
        }
    }
}
