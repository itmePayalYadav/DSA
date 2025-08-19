#include<iostream>
using namespace std;

int main(){
    int *ptr1 = new int;
    *ptr1 = 6000;
    cout << *ptr1 << endl;

    float *ptr2 = new float;
    *ptr2 = 3.6;
    cout << *ptr2 << endl;

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *p = new int[n];

    for (int i = 0; i < n; i++)
    p[i] = i + 1;

    for (int i = 0; i < n; i++)
    cout << p[i] << endl;
}
