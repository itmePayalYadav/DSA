#include<iostream>
using namespace std;

int main(){
    int arr[] = {100, 200, 300, 400, 500, 600};
    int *ptr = arr;
    ptr = ptr + 3;
    cout << *ptr << endl;

    ptr = ptr - 2;

    cout << *ptr << endl;
}
