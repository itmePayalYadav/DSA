#include<iostream>
using namespace std;

int main(){
    int matrix[5][4] = {2, 6, 10, 14, 18, 20, 24, 27, 29, 38, 47, 52, 78, 93, 102, 108, 111, 200, 218, 320};

    int rows = sizeof(matrix) / sizeof(matrix[0]);         
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int target = 52;

    for (int i = 0; i < rows; i++){
        if(matrix[i][0] <= target && matrix[i][rows - 1] >= target){
            int start = 0, end = rows - 1;
            while (start <= end){
                int mid = start + (end - start) / 2;
                if(matrix[i][mid] == target){
                    cout << target << " at position [" << i << "][" << mid << "]." << endl;
                    break;
                }
                else if(matrix[i][mid] < target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
    }
    
}