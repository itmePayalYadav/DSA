#include<iostream>
using namespace std;

void func(int &p){
    p = p + 1;
}

int main(){
    int n = 10;
    int *p = &n;
    cout << p;
    func(n);

    cout << n;
}
