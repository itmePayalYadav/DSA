#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int N = 5;
    vector<int> ans(1, 1);

    while(N > 1){
        int carry = 0, res, size = ans.size();

        for (int i = 0; i < size; i ++){
            res = ans[i] * N + carry;
            ans[i] = res % 10;
            carry = res / 10;
        }

        while(carry){
            ans.push_back(carry % 10);
            carry /= 10;
        }
        
        N--;   
    };

    reverse(ans.begin(), ans.end());

    cout << "Factorial = ";
    for (int d : ans) cout << d;
    cout << endl;

    return 0;
}
