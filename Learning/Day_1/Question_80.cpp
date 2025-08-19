#include<iostream>
using namespace std;

int main(){
    int matrix[5][4] = {2, 6, 10, 14, 18, 20, 24, 27, 29, 38, 47, 52, 78, 93, 102, 108, 111, 200, 218, 320};

    int rows = sizeof(matrix) / sizeof(matrix[0]);         
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int target = 52;
    bool found = false;

    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            if(matrix[row][col] == target){
                cout << target << " at position [" << row << "][" << col << "]." << endl;
                found = true;
                break; 
            }
        }
        if (found) break;  
    }

    if (!found){
        cout << target << " not found in the matrix." << endl;
    }

    return 0;
}
