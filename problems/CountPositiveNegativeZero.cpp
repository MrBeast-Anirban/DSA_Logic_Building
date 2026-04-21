// PROBLEM: Count the number of positive, negative, and zero elements in an array.
#include<iostream>
using namespace std;
int main(){
    int n, positiveCount = 0, negativeCount = 0, zeroCount = 0;
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
        if(arr[i] > 0){
            positiveCount++;
        } 
        else if(arr[i] < 0){
            negativeCount++;
        } 
        else {
            zeroCount++;
        }
    }
    cout << "Number of positive elements: " << positiveCount << endl;
    cout << "Number of negative elements: " << negativeCount << endl;
    cout << "Number of zero elements: " << zeroCount << endl;
    return 0;
}