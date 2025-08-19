#include<iostream>
using namespace std;

int main(){
    string s1 = "naman";
    int start = 0, end = s1.size() - 1;

    while(start < end){
        if(s1[start] != s1[end]){
            cout << "Not a palindrome" << endl;
            return 0;
        }else{
            cout << "Palindrome" << endl;
            return 0;
        }
        start++;
        end--;
    }
}   
