#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout << "Address of variable a: " << &a << endl;
    cout << "Value stored in pointer ptr (address of a): " << ptr << endl;
    cout << "Address of pointer ptr itself: " << &ptr << endl;

    float m = 2.3;
    float *ptr1 = &m;

    cout << endl << endl;

    cout << "Address of variable m: " << &m << endl;
    cout << "Value stored in pointer ptr1 (address of m): " << ptr1 << endl;
    cout << "Address of pointer ptr1 itself: " << &ptr1 << endl;

    cout << endl << endl;

    return 0;
}
