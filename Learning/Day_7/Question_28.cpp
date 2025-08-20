#include<iostream>
using namespace std;

int main(){
    int L = 5, B = 5, H = 5;

    int n = 5, m = 5;

    int ***ptr = new int**[L];

    for (int i = 0; i < L; i++){
        ptr[i] = new int *[B];
        for (int j = 0; j < B; j++){
            ptr[i][j] = new int[H];
        }
    }

    for (int i = 0; i < L; i++){
        for (int j = 0; j < B; j++){
            for (int k = 0; k < H; k++){
                ptr[i][j][k] = j + 1;  
            }
        }
    }

    for (int i = 0; i < L; i++){
        for (int j = 0; j < B; j++){
            for (int k = 0; k < H; k++){
                cout << ptr[i][j][k];  
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < L; i++){
        for (int j = 0; j < B; j++){
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;
}
