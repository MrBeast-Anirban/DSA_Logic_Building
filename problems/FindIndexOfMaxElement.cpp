// PROBLEM: Find the index of the maximum element.
#include<iostream>
using namespace std;
int main(){
    int n, maxIndex = 0;
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
    }
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "Index of the maximum element: " << maxIndex << endl;
    return 0;
}