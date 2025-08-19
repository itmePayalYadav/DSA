#include<vector>
#include<iostream>
using namespace std;

int main(){
    string s = "ABCABDABCABCABD";
    vector<int> lps(s.size(), 0);

    int prefix = 0;
    int suffix = 1;

    while(suffix < s.size()){
        if(s[prefix] == s[suffix]){
            lps[suffix] = prefix + 1;
            prefix++;
            suffix++;
        }else{
            if(prefix == 0){
                lps[suffix] = 0;
                suffix++;
            }else{
                prefix = lps[prefix - 1];
            }
        }
    }

    for (int val : lps) {
        cout << val << " ";
    }
    cout << endl;
}