// PROBLEM: Check if an array is sorted (ascending or descending).
#include<iostream>
#include<vector>
using namespace std;

bool isSorted(const vector<int>& arr) {
    bool ascending = true;
    bool descending = true;
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            ascending = false;
        }
        if (arr[i] > arr[i - 1]) {
            descending = false;
        }
    }
    
    return ascending || descending;
}
int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    if (isSorted(arr)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}
/*
The array is sorted.
*/
