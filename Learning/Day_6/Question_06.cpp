#include <vector>
#include <iostream>
using namespace std;

int main() {
    string s = "is2 sentence4 this1 a3";
    vector<string> ans(5); 

    string temp;
    int index = 0;

    while (index < s.size()) {
        if (s[index] == ' ') {
            int pos = temp.back() - '0'; 
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            index++; 
        } else {
            temp += s[index];
            index++;
        }
    }

    if (!temp.empty()) {
        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;
    }

    for (int i = 1; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
