// PROBLEM: Count how many elements are perfect squares.
#include<iostream>
using namespace std;
int isPerfectSquare(int num){
    if(num < 0) return 0;  // Negative numbers cannot be perfect squares
    int root = sqrt(num);  // Calculate the integer square root of num
    return root * root == num;  // Check if the square of the root is equal to num
}
int main(){
    int n, count = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size of the array" << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(isPerfectSquare(arr[i])) count++;
    }
    cout << "The number of perfect square elements in the array is: " << count << endl;
    return 0;   
}