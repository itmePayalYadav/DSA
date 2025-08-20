#include<iostream>
using namespace std;

int main(){
    int **ptr = new int *[5];

    for (int i = 0; i < 5; i++){
        ptr[i] = new int[5];
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            ptr[i][j] = i;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++){
        delete[] ptr[i];
    }

    delete[] ptr;  

    return 0;
}
