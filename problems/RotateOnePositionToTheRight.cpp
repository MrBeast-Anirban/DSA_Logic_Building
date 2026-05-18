// PROBLEM: Rotate an array by one position to the right.
#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Original array: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    int arrSize = arr.size();
    int lastElement = arr[arrSize - 1]; // Store the last element
    for(int i = arrSize - 1; i > 0; i--){
        arr[i] = arr[i - 1]; // Shift elements to the right
    }
    arr[0] = lastElement; // Place the last element at the beginning
    cout << "Array after rotation: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}
/*
Original array: 1, 2, 3, 4, 5, 
Array after rotation: 5, 1, 2, 3, 4, 
*/