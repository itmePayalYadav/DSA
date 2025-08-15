#include<iostream>
using namespace std;

int main(){
    string address = "1.1.1.1.1";
    string ans;
    int index = 0;

    while(index < address.size()){
        if(address[index] == '.'){
            ans = ans + "[.]";
        }else{
            ans = ans + address[index];
        }
        index++; 
    }

    cout << "Defanged: " << ans << endl;
}
