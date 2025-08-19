#include<iostream>
using namespace std;

int main(){
    int piles[4] = {3, 6, 7, 11};
    int n = sizeof(piles) / sizeof(piles[0]);

    int h = 8;
    int end = 0;
    int ans = -1;
    int start = 0;

    for (int i = 0; i < n; i++){
        start += piles[i];
        end = max(end, piles[i]);
    }

    start/=h;

    while(start <= end){
        int mid = start + (end - start) / 2;

        int total_time = 0;

        for (int i = 0; i < n; i++){
            total_time += piles[i] / mid;
            if(piles[i]%mid){
                total_time++;
            }
        }

        if(total_time > h){
            start = mid + 1;
        }
        else{
            ans = mid;
            end = mid - 1;
        }
    }

    cout << "KOKO Eating Banana " << ans << endl;
}