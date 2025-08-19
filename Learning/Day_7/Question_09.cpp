#include<iostream>
using namespace std;

int main(){
    char name = 'a';
    char *ptr1 = &name;
    cout << (void *)&name << endl;
    cout << (void *)&ptr1 << endl;
}
