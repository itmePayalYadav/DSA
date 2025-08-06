#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node (int value){
        data = value;
        next = NULL;
    }
};

int main(){
    int arr[5] = {100, 200, 300, 400, 500};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *Head = NULL;
}