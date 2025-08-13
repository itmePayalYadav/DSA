#include<queue>
#include<iostream>
using namespace std;

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);

    int n = q.size();

    while(n--){
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}
