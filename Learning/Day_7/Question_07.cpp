#include<iostream>
using namespace std;

int main(){
    char arr[] = {'A', 'B', 'C', 'O', 'M'};

    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i]
            << " | Address = " << static_cast<void*>(&arr[i]) << endl;
    }
}