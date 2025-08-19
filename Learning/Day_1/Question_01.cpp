#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[6] = {4, 6, 7, 11, 2, 8};
    int min = INT_MAX;
    
    for (int i = 0; i < 6; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Minimum Value is: " << min << endl;
}