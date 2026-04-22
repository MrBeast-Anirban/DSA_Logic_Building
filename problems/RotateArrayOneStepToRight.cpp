// PROBLEM: Rotate an array by one position to the right.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 1){
        cout << "Invalid array size.";
        return 0;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int left = arr[n-1];
    for(int i = n-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = left;
    cout << "The one step right shifted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
Enter the size of the array: 5
Enter the elements of the array: 11 12 13 14 15
The one step right shifted array is: 15 11 12 13 14 
*/