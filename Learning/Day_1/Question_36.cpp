#include<iostream>
using namespace std;

int main(){
    int stalls[] = {1, 2, 5, 7, 10};
    int n = sizeof(stalls) / sizeof(stalls[0]);

    int K = 3;
    int ans = -1;
    int start = 1;
    int end = stalls[n - 1] - stalls[0];

    while (start <= end){
        int mid = start + (end - start) / 2;
        int cows = 1;
        int pos = stalls[0];
        for (int i = 0; i < n; i++){
            if(pos + mid <= stalls[i]){
                cows++;
                pos = stalls[i];
            }
        }
        if(cows >= K){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout << "Maximum minimum distance to place aggressive cows is: " << ans << endl;
}