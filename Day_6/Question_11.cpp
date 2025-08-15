#include<vector>
#include<iostream>
using namespace std;

int main(){
    string sentence = "the quick brown for jumps over the lazy dog";
    vector<int> alpha(26, 0);

    for (int i = 0; i < 26; i++){
        if(sentence[i] >= 'a' && sentence[i] <= 'z'){
            int index = sentence[i] - 'a';
            alpha[index] = 1;
        }
    }

    bool isPangram = true;
    for (int i = 0; i < 26; i++){
        if(alpha[i] == 0){
            isPangram = false;
            break;
        }
    }

    if(isPangram){
        cout << "The sentence is a pangram." << endl;
    } else {
        cout << "The sentence is not a pangram." << endl;
    }
    
}