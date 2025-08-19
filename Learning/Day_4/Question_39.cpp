#include <stack>
#include <vector>
#include <iostream>
using namespace std;

class NStack {
public:
    int *arr;
    int Top1, Top2;
    int size;

    NStack(int n) {
        size = n;
        arr = new int[n];
        Top1 = -1;
        Top2 = n;
    }

    void push1(int x) {
        if (Top1 + 1 == Top2) {
            cout << "Stack Overflow (push1)\n";
            return;
        }
        Top1++;
        arr[Top1] = x;
    }

    void push2(int x) {
        if (Top2 - 1 == Top1) {
            cout << "Stack Overflow (push2)\n";
            return;
        }
        Top2--; 
        arr[Top2] = x;
    }

    int pop1() {
        if (Top1 == -1) {
            cout << "Stack Underflow (pop1)\n";
            return -1;
        }
        int element = arr[Top1];
        Top1--;
        return element;
    }

    int pop2() {
        if (Top2 == size) {
            cout << "Stack Underflow (pop2)\n";
            return -1;
        }
        int element = arr[Top2];
        Top2++;
        return element;
    }
};

int main() {
    NStack st(10);

    st.push1(1);
    st.push1(2);
    st.push1(3);

    st.push2(9);
    st.push2(8);
    st.push2(7);

    cout << "Pop1: " << st.pop1() << endl; 
    cout << "Pop1: " << st.pop1() << endl;

    cout << "Pop2: " << st.pop2() << endl;
    cout << "Pop2: " << st.pop2() << endl; 

    st.push1(4);
    st.push2(6);

    cout << "Pop1: " << st.pop1() << endl;
    cout << "Pop2: " << st.pop2() << endl; 

    return 0;
}

