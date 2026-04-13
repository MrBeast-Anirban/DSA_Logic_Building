// PROBLEM: Calculate power of a number (xⁿ) using recursion.
#include<iostream>
using namespace std;
long long power(int x, int n){
    if( n == 0) return 1; // Base case: any number raised to the power of 0 is 1
    return x * power(x, n-1); // Recursive case: xⁿ = x * xⁿ⁻¹
}
int main(){
    int x, n;
    cout << "Enter the base and the exponenet: ";
    cin >> x >> n;
    cout << "The power of " << x << " raised to " << n << " is: " << power(x, n) << endl;
    return 0;
}