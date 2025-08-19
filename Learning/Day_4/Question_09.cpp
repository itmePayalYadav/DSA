#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<string> V = {"ab", "ac", "da", "da", "ac", "db", "ea"};
    stack<string> S;

    for (int i = 0; i < V.size(); i++){
        if(S.empty()){
            S.push(V[i]);
        }else if(S.top() == V[i]){
            S.pop();
        }else {
            S.push(V[i]);
        }
    }

    while(!S.empty()){
        cout << S.top() << " ";
        S.pop();
    }
}