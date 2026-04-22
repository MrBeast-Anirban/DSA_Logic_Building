// PROBLEM: Swap alternate elements (1st ↔ 2nd, 3rd ↔ 4th, etc.).
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
    for(int i = 0; i < n-1; i+=2){
        arr[i] = arr[i]+arr[i+1]; // Step 1: Add the current and next elements and store the result in the current element
        arr[i+1] = arr[i]-arr[i+1]; // Step 2: Subtract the new value of the current element from the next element and store the result in the next element (which is now the original current element)
        arr[i] = arr[i]-arr[i+1]; // Step 3: Subtract the new value of the next element from the current element and store the result in the current element (which is now the original next element)
    } 
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
Enter the size of the array: 5
Enter the elements of the array: 1 2 3 4 5
2 1 4 3 5 
*/