#include<iostream>
using namespace std;

int main(){
    string s = "rohit negi";
    int i = 0;
    int j = s.length() - 1;
    while(i < j){
        swap(s[i], s[j]);
        i++;
        j--;
    }

    cout << s << endl;
    return 0;
}
