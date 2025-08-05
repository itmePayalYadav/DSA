#include<iostream>
using namespace std;

int main(){
    int matrix[6][6] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};

    int top = 0;
    int left = 0;
    int right = 5;
    int bottom = 5;

    while(top < bottom && left < right){
        for (int j = left; j <= right; j++){
            cout << matrix[top][j] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++){
            cout << matrix[i][right] << " ";
        }
        right--;
        if(top <= bottom){
            for (int j = right; j >= left; j--){
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }
        if(left <= right){
            for (int i = bottom; i >= top; i--){
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}