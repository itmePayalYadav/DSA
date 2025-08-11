#include<stack>
#include<iostream>
using namespace std;

bool check(string str){
    stack<char> S;
    for (int i = 0; i < str.size(); i++){
        if(str[i] == '('){
            S.push(str[i]);
        }else{
            if(S.empty()){
                return 0;
            }else{
                S.pop();
            }
        }
    }
    return S.empty();
}

int main(){
    string parentheses = "((()(()))";

    if (check(parentheses)) {
        cout << "Parentheses are valid." << endl;
    } else {
        cout << "Parentheses are NOT valid." << endl;
    }
}