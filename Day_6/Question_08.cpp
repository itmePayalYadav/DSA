#include <iostream>
using namespace std;

string rotateClockWise(string s) {
    char last = s.back();
    for (int i = s.size() - 1; i > 0; i--) {
        s[i] = s[i - 1];
    }
    s[0] = last;
    return s;
}

string rotateAntiClockWise(string s) {
    char first = s[0];
    for (int i = 0; i < s.size() - 1; i++) {
        s[i] = s[i + 1];
    }
    s[s.size() - 1] = first;
    return s;
}

bool isRotatedBy2Places(string s1, string s2) {
    if (s1.size() != s2.size()) return false;

    string cw = rotateClockWise(rotateClockWise(s1));

    string acw = rotateAntiClockWise(rotateAntiClockWise(s1));

    return (cw == s2) || (acw == s2);
}

int main() {
    string s1 = "amazon";
    string s2 = "azonam";

    if (isRotatedBy2Places(s1, s2)) {
        cout << s2 << " is a rotation of " << s1 << " by 2 places.\n";
    } else {
        cout << s2 << " is NOT a rotation of " << s1 << " by 2 places.\n";
    }
}
