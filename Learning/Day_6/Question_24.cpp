#include<vector>
#include<iostream>
using namespace std;

vector<int> buildLPS(const string &pat){
    int m = pat.size();
    vector<int> lps(m, 0);
    int len = 0, i = 1;

    while (i < m) {
        if (pat[i] == pat[len]) {
            lps[i++] = ++len;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }
    }
    return lps;
}

bool circularMatch(const string &text, const string &pattern){
    if (text.size() != pattern.size()) return false;
    string doubled = text + text;
    vector<int> lps = buildLPS(pattern);

    int i = 0, j = 0;
    while (i < doubled.size()) {
        if (doubled[i] == pattern[j]) {
            i++; j++;
            if (j == pattern.size()) return true; 
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return false;
}

int main() {
    string text = "cdeabroab";
    string pattern = "abroabcde";

    if (circularMatch(text, pattern)) {
        cout << "Pattern is a rotation of text\n";
    } else {
        cout << "Not a rotation\n";
    }
}