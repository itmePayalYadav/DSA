#include <stack>
#include <iostream>
using namespace std;

stack<int> push(int arr[], int n) {
    stack<int> st;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            st.push(arr[i]);
        } else {
            st.push(min(arr[i], st.top()));
        }
    }
    return st;
}

void getMinAtPop(stack<int> S) {
    while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 6, 43, 1, 2, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> st = push(arr, n);

    cout << "Minimum at each pop: ";
    getMinAtPop(st);

    return 0;
}
