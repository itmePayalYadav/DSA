#include<iostream>
using namespace std;

int main(){
    int arr[6] = {10, 20, 7, 11, 8, 4};
    int k = 18;

    int index = -1;

    for (int i = 0; i < 6; i++){
        if(arr[i] == k){
            index = arr[i];
            
            break;
        }
    }

    if(index != -1){
        cout << "Your element at the index position is: " << index << endl;
    }else{
        cout << index << endl;
    }
}