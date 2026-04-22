// PROBLEM: Rotate an array by one position to the left.
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
    int right = arr[0];
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = right;
    cout << "The one step left shifted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
Enter the size of the array: 5
Enter the elements of the array: 11 12 13 14 15
The one step left shifted array is: 12 13 14 15 11 
*/