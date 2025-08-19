#include<vector>
#include<iostream>
using namespace std;

int main(){
    int height[8] = {4, 2, 0, 5, 2, 6, 2, 3};
    int n = sizeof(height) / sizeof(height[0]);

    vector<int> leftMax(n);
    vector<int> rightMax(n);

    leftMax[0] = 0;
    rightMax[n - 1] = 0;

    for (int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--){
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);
    }

    int water = 0;

    for (int i = 0; i < n; i++){
        int minHeight = min(leftMax[i], rightMax[i]);
        if(minHeight - height[i] >= 0){
            water += minHeight - height[i];
        }
    }

    cout << "Trapping Water is " << water << endl;

    return 0;
}