#include<iostream>
using namespace std;

int main(){
    string haystack = "abfcdsrtfdcscgnh";
    string needle = "csc";

    int n = haystack.size();
    int m = needle.size();

    for (int i = 0; i <= n - m; i++){  
        int first = i;                
        int second = 0;
        while (second < m)
        {
            if(haystack[first] != needle[second]){  
                break;
            }else{
                first++;
                second++;
            }
        }

        if(second == m){
            cout << first - second;  
        }
    }
}
