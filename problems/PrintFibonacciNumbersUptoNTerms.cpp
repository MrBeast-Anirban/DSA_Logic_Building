// PROBLEM: Print Fibonacci series up to n terms recursively.
#include<iostream>
using namespace std;

// Recursive function to print Fibonacci series up to n terms
void printFibonacci(int n, int a = 0, int b = 1) {
    if (n <= 0) return;  // Base case: If n is 0 or negative, stop the recursion

    cout << a << " ";  // Print the current Fibonacci number (starting with a)
    
    // Recurse with the next Fibonacci numbers
    printFibonacci(n - 1, b, a + b);  // a becomes b, b becomes a + b
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";
    printFibonacci(n);  // Call the recursive function
    cout << endl;

    return 0;
}