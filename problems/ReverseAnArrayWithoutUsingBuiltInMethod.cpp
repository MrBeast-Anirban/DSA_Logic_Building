// PROBLEM: Reverse an array (without using built-in reverse).
#include<iostream>
using namespace std;
int main(){
    int n;  
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size of the array" << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n/2; i++){
        arr[i] = arr[i]+arr[n-1-i]; // Step 1: Add the current element and its corresponding element from the end of the array and store the result in the current element
        arr[n-1-i] = arr[i]-arr[n-1-i]; // Step 2: Subtract the new value of the current element from the corresponding element from the end of the array and store the result in the corresponding element from the end of the array (which is now the original current element)
        arr[i] = arr[i]-arr[n-1-i]; // Step 3: Subtract the new value of the corresponding element from the end of the array from the current element and store the result in the current element (which is now the original corresponding element from the end of the array)
    }
    cout << "The reversed array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}