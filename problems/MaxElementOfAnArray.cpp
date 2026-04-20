// PROBLEM: Find the maximum element in an array.
#include<iostream>
using namespace std;
int main(){
    int n, max = INT_MIN;
    cout << "Enter the number of terms in the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid input. The number of terms must be greater than 0." << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "The maximum element in the array is: " << max << endl;
    return 0;
}