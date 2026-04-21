//PROBLEM: Find the index of the minimum element.
#include<iostream>
using namespace std;
int main(){
    int n, minIndex = 0;
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
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }       
    cout << "Index of the minimum element: " << minIndex << endl;
    return 0;
}