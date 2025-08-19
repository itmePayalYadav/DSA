#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *p = &n;     
    int **ptr = &p; 

    cout << "Value of n: " << n << endl;
    cout << "Address of n (&n): " << &n << endl;
    cout << "Value of p (address of n): " << p << endl;
    cout << "Value at *p: " << *p << endl;
    cout << "Address of p (&p): " << &p << endl;
    cout << "Value of ptr (address of p): " << ptr << endl;
    cout << "Value at *ptr (value of p): " << *ptr << endl;
    cout << "Value at **ptr (value of n): " << **ptr << endl;
    cout << "Address of ptr (&ptr): " << &ptr << endl;

    return 0;
}
