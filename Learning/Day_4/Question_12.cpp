#include<stack>
#include<iostream>
using namespace std;

int check(string str) {
    stack<char> st;
    int count = 0;

    for (int i = 0; i < str.size(); i++){
        if(str[i] == '('){
            st.push(str[i]);
        }else {
            if(st.empty()){
                count++;
            }else{
                st.pop();
            }
        }
    }

    return count + st.size();
};

int main(){
    string parentheses = ")))";

    cout << "Minimum " << check(parentheses) << " parentheses are required." << endl;

    return 0;
}