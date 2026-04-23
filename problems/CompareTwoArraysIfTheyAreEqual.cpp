// PROBLEM: Compare two arrays — check if they are equal (same elements & order).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size error." << endl;
        return 0;
    }
    int arr1[n], arr2[n];
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    bool isEqual = true;
    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            isEqual = false;
            break;
        }
    }
    if(isEqual){
        cout << "The arrays are equal." << endl;
    }
    else{
        cout << "The arrays are not equal." << endl;
    }
    return 0;
}