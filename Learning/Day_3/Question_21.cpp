#include<iostream>
using namespace std;

int main(){
    for (int row = 1; row <= 5; row++){
        for (int col = 1; col <= 5 - row; col++){
            cout << "  ";
        }
        for (int col = 1; col <= row; col++){
            cout << char('A' + col - 1) << " ";
        }
        cout << endl;
    }
}