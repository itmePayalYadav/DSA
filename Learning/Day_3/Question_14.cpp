#include<iostream>
using namespace std;

int main(){
    char name = 'a';
    for (int row = 1; row <= 5; row++){
        for (int col = 1; col <= row; col++){
            cout << char(name + col - 1) << " ";
        }
        cout << endl;
    }
}
