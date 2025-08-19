#include<vector>
#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    x = 10, y = 20, z = 30;

    vector<int> arr(5, 50);

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] * i << endl;
    }

    cout << x << endl << y << endl << z << endl;
}
