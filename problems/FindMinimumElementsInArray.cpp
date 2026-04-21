// PROBLEM: Find the minimum element in an array.
#include<iostream>
using namespace std;
int main(){
    int n, min = INT_MAX;
    cout << "Enter the number of terms: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size error.";
        return 0;
    }
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(min > arr[i]) min = arr[i];
    }
    cout << "The minimum element of array is: " << min << endl;
    return 0;
}