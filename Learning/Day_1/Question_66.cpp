#include<iostream>
using namespace std;

int main(){
    int arr[3][4] = {{2, 3, 4, 5}, {1, 3, 6, 2}, {7, 8, 9, 0}};

    int start = 0;
    int end = 4 - 1;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            while (start < end){
                swap(arr[i][start], arr[i][end]);
                start++;
                end--;
            }
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}