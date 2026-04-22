// PROBLEM: Replace every negative number with 0 in array.
#include<iostream>
using namespace std;
int main(){
    vector<int> arr;
    int n,number;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size of array" << endl;
        return 0;
    }
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> number;
        if(number < 0) number = 0; // Replace negative number with 0
        arr.push_back(number);
    }
    cout << "The new array containing all positive elements is: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}