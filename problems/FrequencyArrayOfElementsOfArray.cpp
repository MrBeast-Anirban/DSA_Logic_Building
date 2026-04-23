// PROBLEM: Create a frequency array of numbers (count occurrence of each number).
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size error." << endl;
        return 0;
    }
    
    vector<int> arr(n);
    int max = INT_MIN;
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    vector<int> frequency(max + 1, 0); // Create frequency array with size max + 1
    for(int i = 0; i < n; i++){
        frequency[arr[i]]++; // increment the count of the current element in the frequency array
    }
    
    cout << "The frequency of each element is: " << endl;
    for(int i = 0; i <= max; i++){
        if(frequency[i] > 0){
            cout << i << ": " << frequency[i] << endl; // print the element and its frequency
        }
    }
    
    return 0;
}