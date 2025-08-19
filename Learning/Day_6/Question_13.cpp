#include<vector>
#include<iostream>
using namespace std;

int main(){
    string s = "lEetcOde";  

    vector<int> lower(26, 0);
    vector<int> upper(26, 0);
    vector<char> ans;

    for (int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    for (int i = 0; i < 26; i++){
        char c = 'A' + i;
        while (upper[i]){
            ans.push_back(c); 
            upper[i]--;
        }
    }

    for (int i = 0; i < 26; i++){
        char c = 'a' + i;
        while (lower[i]){
            ans.push_back(c); 
            lower[i]--;
        }
    }

    cout << s << endl;

    int idx = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '#'){
            s[i] = ans[idx++];
        }
    }    
    cout << s << endl;    
    return 0;
}
