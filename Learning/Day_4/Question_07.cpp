#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> arr = {2, 3, 5, -4, 6, -2, -8, 9};
    stack<int> S;

    for (int num : arr) {
        if (!S.empty() && ((S.top() >= 0 && num < 0) || (S.top() < 0 && num >= 0))) {
            S.pop();
        } else {
            S.push(num);
        }
    }

    cout << "Stack elements (top to bottom): ";
    
    while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }

    cout << endl;
}
