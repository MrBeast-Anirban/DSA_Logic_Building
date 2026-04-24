// PROBLEM: Find the sum of all elements except the largest and smallest.
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
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != largest && arr[i] != smallest){
            sum += arr[i];
        }
    }
    cout << "The sum of all elements except the largest and smallest is: " << sum << endl;
    return 0;
}