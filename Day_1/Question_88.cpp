#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {4, 3, 2, 1, 2, 7, 6};
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        arr[(arr[i] - 1) % n] += n;
    }

    int missing = -1, repeating = -1;

    for (int i = 0; i < n; i++) {
        int freq = arr[i] / n;

        if (freq == 0) {
            missing = i + 1;
        } else if (freq == 2) {
            repeating = i + 1;
        }
    }

    cout << "Repeating Number: " << repeating << endl;
    cout << "Missing Number: " << missing << endl;

    return 0;
}
