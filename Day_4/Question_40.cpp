#include<stack>
#include<vector>
#include<iostream>
using namespace std;

class Node {
public:
    int index;
    Node *next;

    Node(int index){
        this->index = index;
        next = NULL;
    }
};

class NStack {
public:
    int *arr;
    Node **Top;

    stack<int> st; 

    NStack(int N, int S){
        arr = new int[S];
        Top = new Node *[N];

        for (int i = 0; i < N; i++) {
            Top[i] = NULL;
        }

        for (int i = 0; i < N; i++){
            for (int i = 0; i < S; i++){
                st.push(i);
            }
        }
    }

    bool push(int x, int m){
        if(st.empty()){
            return false;
        }else{
            arr[st.top()] = x;
            Node *temp = new Node(st.top());
            temp->next = Top[m - 1];
            Top[m - 1] = temp;
            st.pop();
            return true;
        }
    };

    int pop(int m) {
        if(Top[m - 1] == NULL){
            return -1;
        }else{
            st.push(Top[m - 1]->index);
            int element = arr[Top[m - 1]->index];
            Top[m - 1] = Top[m - 1]->next;
            return element;
        }
    };
};

int main() {
    NStack st(3, 10); 

    st.push(10, 1);
    st.push(20, 1);

    st.push(30, 2);
    st.push(40, 2);

    st.push(50, 3);

    cout << "Pop from stack 1: " << st.pop(1) << endl; 
    cout << "Pop from stack 1: " << st.pop(1) << endl; 
    cout << "Pop from stack 1: " << st.pop(1) << endl; 

    cout << "Pop from stack 2: " << st.pop(2) << endl; 
    cout << "Pop from stack 2: " << st.pop(2) << endl; 

    cout << "Pop from stack 3: " << st.pop(3) << endl;

    return 0;
}
