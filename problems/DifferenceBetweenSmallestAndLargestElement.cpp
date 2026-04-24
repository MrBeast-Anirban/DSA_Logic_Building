// PROBLEM: Find the second largest element in an array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 1){
        cout << "Invalid size error. Array must have at least 2 elements." << endl;
        return 0;
    }
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int largest = INT_MIN, smallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "The difference between the largest and smallest elements is: " << (largest - smallest) << endl; 
    return 0;
}