#include<vector>
#include<iostream>
using namespace std;

void lpsFind(vector<int>&lps, string s){
    int prefix = 0;
    int suffix = 1;

    while(suffix < s.size()){
        if(s[prefix] == s[suffix]){
            lps[suffix] = prefix + 1;
            suffix++;
            prefix++;
        }else{
            if(prefix == 0){
                lps[suffix] = 0;
                suffix++;
            }else{
                prefix = lps[prefix - 1];
            }
        }
    }
};

int main(){
    string haystack = "abcdaabceaabceaabdop";
    string needle = "aabceaabdo";

    int n = haystack.size();
    int m = needle.size();

    vector<int> lps(needle.size(), 0);

    lpsFind(lps, needle);

    int first = 0;
    int second = 0;

    while(second < m && first < n){
        if(needle[second] == haystack[first]){
            first++;
            second++;
        }else{
            if(second == 0){
                first++;
            }else{
                second = lps[second - 1];
            }
        }
    }

    if(second == m){
        cout << first - second; 
    }

    return 0;
}
