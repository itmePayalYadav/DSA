#include<iostream>
using namespace std;

int main(){
    string s = "rohit negi";
    for (int i = s.size() - 1; i >= 0; i--){
        cout << s[i];
    }
    cout << endl;
    return 0;
}