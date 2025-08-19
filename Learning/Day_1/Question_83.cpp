#include<iostream>
using namespace std;

int main(){
    int matrix[5][4] = {2, 6, 10, 14, 18, 20, 24, 27, 29, 38, 47, 52, 78, 93, 102, 108, 111, 200, 218, 320};

    int rows = sizeof(matrix) / sizeof(matrix[0]);         
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int target = 200;

    int start = 0;
    int end =  rows * cols  - 1;

    while (start <= end){
        int mid = start + (end - start) / 2;
        int row_index = mid / cols;
        int col_index = mid % cols;

        if(matrix[row_index][col_index] == target){
            cout << target << " at position [" << row_index << "][" << col_index << "]." << endl;
            break;
        }else if(matrix[row_index][col_index] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
}