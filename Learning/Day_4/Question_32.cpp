#include <stack>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {0, 1, 0, 1, 1},
        {0, 0, 0, 1, 1},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0},
        {1, 0, 1, 1, 0}
    };

    int n = matrix.size();
    stack<int> S;

    for (int i = 0; i < n; i++) {
        S.push(i);
    }

    while (S.size() > 1) {
        int a = S.top(); S.pop();
        int b = S.top(); S.pop();

        if (matrix[a][b] == 1) {
            S.push(b);
        } else {
            S.push(a);
        }
    }

    if (S.empty()) {
        cout << "No celebrity" << endl;
        return 0;
    }

    int candidate = S.top();
    S.pop();

    bool isCelebrity = true;
    for (int i = 0; i < n; i++) {
        if (i != candidate) {
            if (matrix[candidate][i] == 1 || matrix[i][candidate] == 0) {
                isCelebrity = false;
                break;
            }
        }
    }

    if (isCelebrity) {
        cout << "Celebrity is person: " << candidate << endl;
    } else {
        cout << "No celebrity" << endl;
    }
}
