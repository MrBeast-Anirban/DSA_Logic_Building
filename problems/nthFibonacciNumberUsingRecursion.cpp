// PROBLEM: Find nth Fibonacci number recursively (index start with 1).
#include<iostream>
using namespace std;
int NthFibonacci(int n){
    if(n == -1) return -1;
    if(n == 0 || n == 1) return n; // Base cases: F(0) = 0, F(1) = 1
    return NthFibonacci(n-1) + NthFibonacci(n-2); // Recursive case: F(n) = F(n-1) + F(n-2)
}
int main(){
    int n;
    cout << "Enter the position of Fibonacci Number you want to know: ";
    cin >> n;
    cout << "Fibonacci Number at position " << n << " is " << NthFibonacci(n-1) << endl;
    return 0;
}