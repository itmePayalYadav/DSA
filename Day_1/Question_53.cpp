#include<iostream>
using namespace std;

int main(){
    int height[8] = {4, 2, 0, 5, 2, 6, 2, 3};
    int n = sizeof(height) / sizeof(height[0]);

    int maxLeft = 0, maxRight = 0, water;
    int maxHeight = height[0], index = 0;

    for (int i = 1; i < n; i++){
        if(height[i] > maxHeight){
            maxHeight = height[i];
            index = i;
        }
    }

    // Left Part
    for (int i = 0; i < index; i++){
        if(maxLeft > height[i]){
            water += maxLeft - height[i];
        }
        else{
            maxLeft = height[i];
        }
    }

    // Right Part
    for (int i = n - 1; i > index; i--){
        if(maxRight > height[i]){
            water += maxRight - height[i];
        }
        else{
            maxRight = height[i];
        }
    }

    cout << "Trapping Water is " << water << endl;

    return 0;
}