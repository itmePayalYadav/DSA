#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout << "Address of a: " << ptr << endl;
    cout << "Address of pointer p: " << &ptr << endl;
    cout << "Variable of pointer p: " << *ptr << endl;
}
