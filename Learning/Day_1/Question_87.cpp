#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> arr = {4, 3, 2, 1, 2, 7, 6};
    int n = arr.size();
    vector<int> count(n,0);

    for (int i = 0; i < n; i++)
    count[arr[i] - 1]++;

    for (int i = 0; i < n; i++){
        if(count[i] == 0){
            cout << "Missing No : " << i + 1 << endl;
        }
        if(count[i] == 2){
            cout << "Repeating No : " << i << endl;
        }
    }
}
