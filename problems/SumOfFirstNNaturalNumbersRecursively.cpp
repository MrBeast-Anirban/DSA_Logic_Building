// PEOBLEM: Print sum of first n natural numbers recursively.
#include<iostream>
using namespace std;
int findSum(int n){
    if(n == 0) return 0; // Base case: sum of first 0 natural numbers is 0
    return n + findSum(n - 1); // Recursive case: n + sum of first (n-1) natural numbers
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The sum of the first " << n << " natural numbers is: " << findSum(n) << endl;
    return 0;
}