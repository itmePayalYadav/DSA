#include<iostream>
using namespace std;

int main(){
    int num = 10;
    int &temp = num;

    cout << num << " | " << temp << endl;
    cout << &num << " | " << &temp << endl;
    temp++;

    cout << num << " | " << temp << endl;
    cout << &num << " | " << &temp << endl;
}
