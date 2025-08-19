#include<vector>
#include<iostream>
using namespace std;

int main(){
    string sentence = "eabcabd";
    vector<int>alphabet(26, 0);

    for (int i = 0; i < sentence.size(); i++){
        if(sentence[i] >= 'a' && sentence[i] <= 'z'){
            alphabet[sentence[i] - 'a']++;
        }
    }

    string sorting;
    for (int i = 0; i < 26; i++){
        while (alphabet[i] > 0) { 
            sorting += char(i + 'a');
            alphabet[i]--;
        }
    }

    cout << "Sorting String: " << sorting << endl;
}
