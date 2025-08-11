#include<stack>
#include<iostream>
using namespace std;

int main(){
    stack<int> S;
    S.push(10);
    S.push(25);
    S.push(35);
    cout << "Stack Size: " << S.size() << endl;
    cout << "Stack Top element: " << S.top() << endl;
    S.pop();
    cout << "Stack Top element: " << S.top() << endl;
    cout << S.empty() << endl;
}
