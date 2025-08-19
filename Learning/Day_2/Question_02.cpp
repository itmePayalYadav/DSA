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
    NODE *TEMP;
    TEMP = new NODE(500);
    HEAD = new NODE(400);

    TEMP->next = HEAD;
    HEAD = TEMP;

    if(HEAD == NULL){
        HEAD = new NODE(300);
    }

    cout << HEAD->data << endl;
    cout << HEAD->next << endl;
}
