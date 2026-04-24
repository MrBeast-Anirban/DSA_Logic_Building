// PROBLEM: Find the second largest element in an array.
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
    int largest = INT_MIN, secondLargest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
    }
    cout << "The second largest element in the array is: " << secondLargest << endl;
    return 0;
}