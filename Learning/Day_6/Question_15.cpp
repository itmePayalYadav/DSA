#include<iostream>
using namespace std;

int number(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;  
    }
}

int main(){
    string s = "XLIII";
    int sum = 0, index = 0;

    while(index < s.size() - 1){
        if(number(s[index]) < number(s[index + 1])){
            sum -= number(s[index]);
        }else{
            sum += number(s[index]);
        }
        index++;
    }

    sum += number(s[s.size() - 1]);

    cout << "Roman numeral: " << s << endl;
    cout << "Integer value: " << sum << endl;

    return 0;
}
