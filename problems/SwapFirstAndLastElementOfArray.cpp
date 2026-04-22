// PROBLEM: Swap the first and last elements of the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size error." << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    arr[0] = arr[0]+arr[n-1]; // Step 1: Add the first and last elements and store the result in the first element
    arr[n-1] = arr[0]-arr[n-1]; // Step 2: Subtract the new value of the first element from the last element and store the result in the last element (which is now the original first element)
    arr[0] = arr[0]-arr[n-1]; // Step 3: Subtract the new value of the last element from the first element and store the result in the first element (which is now the original last element)
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}