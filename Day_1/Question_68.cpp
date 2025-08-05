#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> matrix(4, vector<int>(4, 5));

    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++)
    cout << matrix[i][j] << "  ";
    }
}