#include<queue>
#include<iostream>
using namespace std;

int main(){
    queue<int> q;
    int tickets[5] = {0, 5, 2, 3, 7};
    int n = sizeof(tickets) / sizeof(tickets[0]);
    int time = 0;
    int k = 2;

    for (int i = 0; i < n; i++){
        q.push(i);
    };

    while (tickets[k] > 0) { 
        int person = q.front();
        q.pop();

        tickets[person]--; 
        time++;

        if (tickets[person] > 0) { 
            q.push(person);
        }
    }

    cout << "Actual time is " << time;
}
