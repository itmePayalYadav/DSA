#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int *p = &n;
    int **ptr = &p;

    cout << "Single Pointer: " << (*p = *p + 4) << endl;
    cout << "Double Pointer: " << (**ptr = **ptr + 10) << endl;
}
