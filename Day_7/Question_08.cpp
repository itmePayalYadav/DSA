#include<iostream>
using namespace std;

int main(){
    char arr[5] = "1234";
    char *ptr = arr;
    cout << (void*)arr << endl;
    cout << (void*)ptr << endl;

    char name = 'a';
    cout << static_cast<void*>(&name) << endl;
}
