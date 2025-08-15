#include<iostream>
using namespace std;

int main(){
    string s = "Hello World";
    int size = 0;
    while(s[size] != '\0'){
        size++;
    }
    cout << "Total Size of String is: " << size << endl;
    return 0;
}