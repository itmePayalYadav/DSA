#include<iostream>
using namespace std;

int main(){
    int arr[4][3] = {{10, 20, 30},{40, 50, 60},{70, 80, 90},{100, 110, 120}};
    int key = 110;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if(arr[i][j] == key){
                cout << "Yes, found the key " << key << " at position [" << i << "][" << j << "]." << endl;
            }
        }
    }
}