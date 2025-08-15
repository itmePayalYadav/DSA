#include<iostream>
using namespace std;

string rotateClockWise(string s) {
    char c = s[s.size() - 1];
    int index = s.size() - 2;

    while(index >= 0){
        s[index + 1] = s[index];
        index--;
    }

    s[0] = c;

    return s;
};

string rotateAntiClockWise(string s) {
    char c = s[0];
    int index = 1;

    while(index < s.size() - 1){
        s[index - 1] = s[index];
        index++;
    }

    s[s.size() - 1] = c;

    return s;
};

bool isRotatedBy2Places(string s1, string s2) {
    if (s1.size() != s2.size()) return false;

    string cw = rotateClockWise(rotateClockWise(s1));

    string acw = rotateAntiClockWise(rotateAntiClockWise(s1));

    return (cw == s2) || (acw == s2);
}

int main(){
    string s1 = "amazon";
    string s2 = "azonam";

    if (isRotatedBy2Places(s1, s2)) {
        cout << s2 << " is a rotation of " << s1 << " by 2 places.\n";
    } else {
        cout << s2 << " is NOT a rotation of " << s1 << " by 2 places.\n";
    }
}
