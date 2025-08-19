#include<iostream>
using namespace std;

void fun(int &p) {
    p = p + 5;
};

int main(){
    int n = 10;
    int *p = &n;
    fun(n);
    cout << n << endl;
}
