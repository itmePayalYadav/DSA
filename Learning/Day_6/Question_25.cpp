#include <vector>
#include <iostream>
using namespace std;

int KMP_MATCH(const string &text, const string &pattern) {
    int m = pattern.size();
    vector<int> lps(m, 0);
    int pre = 0, suf = 1;

    while (suf < m) {
        if (pattern[pre] == pattern[suf]) {
            lps[suf] = pre + 1;
            suf++;
            pre++;
        } else {
            if (pre == 0) {
                suf++;
            } else {
                pre = lps[pre - 1];
            }
        }
    }

    int i = 0, j = 0;
    while (i < text.size()) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
            if (j == pattern.size()) {
                return 1; 
            }
        } else {
            if (j == 0) {
                i++;
            } else {
                j = lps[j - 1];
            }
        }
    }
    return 0; 
}

int main() {
    string a = "abc";
    string b = "cabcabcabcabcab";

    int repeat = 1;
    string temp = a;

    while (temp.size() < b.size()) {
        temp += a;
        repeat++;
    }

    if (KMP_MATCH(temp, b) == 1) {
        cout << "Repeated String Match " << repeat << endl;
    } else if (KMP_MATCH(temp + a, b) == 1) {
        cout << "Repeated String Match " << repeat + 1 << endl;
    } else {
        cout << "No Match" << endl;
    }
}
