#include<iostream>
using namespace std;

int main() {
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 1},
        {1, 6, 7, 8, 9},
        {6, 7, 8, 9, 1},
        {1, 6, 7, 8, 9}
    };

    for (int j = 0; j < 5; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < 5; i++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            for (int i = 4; i >= 0; i--) {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
