// PROBLEM: Print the factorial of a given number N using Recursion.
#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int N;
    cout << "Enter the number: ";
    cin >> N;
    cout << "Factorial of " << N << " is " << factorial(N) << endl;
    return 0;
}