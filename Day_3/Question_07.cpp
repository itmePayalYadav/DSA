#include<iostream>
using namespace std;

int main(){
    for (char row = 'a'; row <= 'e'; row++){
        for (int col = 0; col <= 5; col++){
            cout << row << " ";
        }
        cout << endl;
    }
}