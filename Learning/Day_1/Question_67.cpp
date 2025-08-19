#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<char>> matrix(5, vector<char>(10, '*'));

    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}
