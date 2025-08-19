#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[6] = {4, 6, 7, 11, 2, 8};
    int max = INT_MIN;

    for (int i = 0; i < 6; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    cout << "Maximum Value is: " << max << endl;
}