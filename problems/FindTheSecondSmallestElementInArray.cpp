// PROBLEM: Find the second smallest element in an array.
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
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }
    
    if(secondSmallest == INT_MAX){
        cout << "No second smallest element found." << endl;
    }
    else{
        cout << "The second smallest element in the array is: " << secondSmallest << endl;
    }
    
    return 0;
}