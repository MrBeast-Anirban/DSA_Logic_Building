// PROBLEM: Print multiplication table of n recursively.
#include<iostream>
using namespace std;
int printMultiplicationTable(int n, int i = 1){
    if(i > 10) return 0; // Base case: stop when i exceeds 10
    cout << n << " x " << i << " = " << n * i << endl; // Print the current multiplication
    return printMultiplicationTable(n, i + 1); // Recursive case: call with the next multiplier
}
int main(){
    int n;
    cout << "Enter a number to print its multiplication table: ";
    cin >> n;
    printMultiplicationTable(n); // Start printing the multiplication table from 1
    return 0;
}