#include<stack>
#include<iostream>
using namespace std;

bool isString(string s1, string s2){
    stack<char> str1;
    stack<char> str2;

    for (int i = 0; i < s1.size(); i++){
        if(s1[i] == '#'){
            if(!str1.empty()){
                str1.pop();
            }
        }else{
            str1.push(s1[i]);
        }
    }

    for (int i = 0; i < s2.size(); i++){
        if(s2[i] == '#'){
            if(!str2.empty()){
                str2.pop();
            }
        }else{
            str2.push(s2[i]);
        }
    }

    return str1 == str2;    
}

int main(){
    string s1 = "ab#c";
    string s2 = "ad#c";

    if (isString(s1, s2)) {
        cout << "Strings are equal after processing" << endl;
    } else {
        cout << "Strings are NOT equal after processing" << endl;
    }
}
