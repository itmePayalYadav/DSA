#include<stack>
#include<iostream>
using namespace std;

bool check(string str){
    stack<char> S;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
            S.push(str[i]);
        }else {
            if(S.empty()){
                return 0;
            }
            else if(str[i] == ')'){
                if(S.top() != '('){
                    return 0;
                }else{
                    S.pop();
                }
            }
            else if(str[i] == '}'){
                if(S.top() != '{'){
                    return 0;
                }else{
                    S.pop();
                }
            }
            else{
                if(S.top() != '['){
                    return 0;
                }else{
                    S.pop();
                }
            }
        }
    }

    return S.empty();
}

int main(){
    string parentheses = "([(])})";
    
    if (check(parentheses)) {
        cout << "The parentheses are valid." << endl;
    } else {
        cout << "The parentheses are NOT valid." << endl;
    }

    return 0;
}