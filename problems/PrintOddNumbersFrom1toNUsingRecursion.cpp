// PROBLEM: Print only odd numbers from 1 to N using recursion.
#include<iostream>
using namespace std;
void PrintOddNumbers(int n){
    if(n == 0) return;
    PrintEvenNumbers(n-1);
    if(n % 2 != 0) cout << n << " ";
    return;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Odd numbers are: ";
    PrintOddNumbers(n);
    return 0;
}