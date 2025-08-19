#include <queue>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    string A = "ababdc";
    string B = "";

    vector<int> repeated(26, 0);
    queue<char> q;

    for (int i = 0; i < A.size(); i++) {
        if (repeated[A[i] - 'a'] >= 1) {
            repeated[A[i] - 'a']++;
            while (!q.empty() && repeated[q.front() - 'a'] > 1) {
                q.pop();
            }
            if (q.empty()) {
                B += "#";
            } else {
                B += q.front();
            }
        } else {
            repeated[A[i] - 'a']++;
            q.push(A[i]);
            while (!q.empty() && repeated[q.front() - 'a'] > 1) {
                q.pop();
            }
            if (q.empty()) {
                B += "#";
            } else {
                B += q.front();
            }
        }
    }

    cout << B << endl; 
    return 0;
}
