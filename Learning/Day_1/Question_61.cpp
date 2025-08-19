#include<iostream>
using namespace std;

// Function to print array column-wise
void printCol(int arr[][4], int totalRows, int totalCols){
    cout << "\nPrinting column-wise:" << endl;
    for (int col = 0; col < totalCols; col++){
        for (int row = 0; row < totalRows; row++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

int main(){
    // Create 2D array
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 1, 1}
    };

    // Print row-wise
    cout << "Printing row-wise:" << endl;
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // Print column-wise using function
    printCol(arr, 3, 4);

    return 0;
}
