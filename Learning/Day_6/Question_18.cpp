#include<vector>
#include<iostream>
using namespace std;


int main(){
   string s = "abcabcbb";
   vector<bool> count(256, false);
   int first = 0, second = 0, length = 0;


   while(second < s.size()){
       while (count[s[second]]){
           count[s[first]] = 0;
           first++;
       }
       count[s[second]] = 1;
       length = max(length, second - first + 1);
       second++;
   }


   cout << "Largest Substring " << length << endl;
}
