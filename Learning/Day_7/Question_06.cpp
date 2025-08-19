#include<iostream>
using namespace std;

int main(){
    char arr[5] = {'1', '2', '3', '4', '5'};
    char *name = arr;

    char ch = 'a';
    char &latter = ch;

    for (int i = 0; i < 5; i++){
        cout << static_cast<void*>(name + i) << endl;
    }

    cout << endl;
    cout << &latter; 
}
