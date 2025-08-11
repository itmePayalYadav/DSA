#include<iostream>
using namespace std;

bool check(string str){
    int left = 0;
    for (int i = 0; i < str.size(); i++){
        if(str[i] == '('){
            left++;
        }else{
            if(left == 0){
                return 0;
            }else{
                left--;
            }
        }
    }
    return left == 0;
}

int main(){
    string parentheses = "((())(()))";

    if (check(parentheses)) {
        cout << "Parentheses are valid." << endl;
    } else {
        cout << "Parentheses are NOT valid." << endl;
    }
}