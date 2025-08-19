#include<iostream>
using namespace std;

int main(){
    int start = 0;
    int end = 100;

    int target = 49;

    int ans = -1;

    while (start <= end){
        int mid = start + (end - start) / 2;
        if(mid * mid == target){
            ans = mid;
            break;
        }
        else if(mid * mid < target){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout << "Floor of sqrt(" << target << ") is: " << ans << endl;

    return 0;
}
