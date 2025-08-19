#include<vector>
#include<iostream>
using namespace std;

int main(){
    string sentence = "the quick brown for jumps over the lazy dog";
    vector<int> lowercase(26, 0);

    for (int c : sentence){
        if(c >= 'a' && c <= 'z'){
            lowercase[c - 'a']++;
        }
    }

    bool isPangram = true;
    for (int i = 0; i < 26; i++){
        if (lowercase[i] == 0) {
            cout << "Missing letter: " << char(i + 'a') << endl;
            isPangram = false;
        }
    }

    if (isPangram) {
        cout << "Pangram" << endl;
    }
}
