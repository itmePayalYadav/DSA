#include<iostream>
using namespace std;

class NODE {
    public:
    int data;
    NODE *next;
    NODE(int value){
        data = value;
        next = NULL;
    };
};

int main(){
    NODE *HEAD;
    HEAD = new NODE(400);

    cout << HEAD->data << endl;
    cout << HEAD->next << endl;
}
