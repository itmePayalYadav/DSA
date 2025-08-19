#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> arr = {4, 3, 2, 1, 2, 7, 6};
    int n = arr.size();

    int repeating = -1, missing = -1;

    for(int i = 1; i <= n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == i){
                count++;
            }
        }
        if(count == 0) {
            missing = i;
        } else if(count == 2) {
            repeating = i;
        }
    }

    cout << "Repeating Number: " << repeating << endl;
    cout << "Missing Number: " << missing << endl;

    return 0;
}
