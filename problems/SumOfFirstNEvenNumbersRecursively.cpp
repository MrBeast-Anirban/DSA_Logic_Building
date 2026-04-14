// PROBLEM: Calculate the sum of first n even numbers recursively.
#include<iostream>
using namespace std;
int findSum(int n){
    if(n == 0) return 0;
    return n%2==0 ? n + findSum(n-1) : findSum(n-1); // Recursive case: if n is even, add it to the sum of first n-1 numbers, otherwise just find the sum of first n-1 numbers.
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The sum of first " << n << " even numbers is: " << findSum(n) << endl; // The sum of first n even numbers 
}