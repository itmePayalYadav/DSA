#include <stack>
#include <vector>
#include <iostream>
using namespace std;

vector<int> bracketNumbers(string S) {
    int count = 0;
    stack<int> st;
    vector<int> ans;

    for (int i = 0; i < S.size(); i++) {
        /* Opening bracket */
        if (S[i] == '(') {
            count++;
            st.push(count);
            ans.push_back(count);
        }
        /* Closing bracket */
        else if (S[i] == ')') {
            ans.push_back(st.top());
            st.pop();
        }
    }

    return ans;
}

int main() {
    string str = "(aa(bdc))p(de)";

    vector<int> result = bracketNumbers(str);

    cout << "Bracket numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
