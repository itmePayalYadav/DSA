#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<char> message = {'h', 'e', 'l', 'l', 'o'};

    stack<char> st;

    for (int i = 0; i < message.size(); i++){
        st.push(message[i]);
    }

    int i = 0;

    while(!st.empty()){
        message[i] = st.top();
        st.pop(); 
        i++;  
    }

    for (int i = 0; i < message.size(); i++){
        cout << message[i] << " ";
    }

    cout << endl;
}
