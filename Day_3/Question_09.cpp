#include<iostream>
using namespace std;

int main(){
    int count = 1;
    for (int row = 0; row < 5; row++){
        for (int col = 0; col < 5; col++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}