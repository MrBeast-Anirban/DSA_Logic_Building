// PROBLEM: Print even numbers from 1 to N using recursion.
#include<iostream>
using namespace std;
void PrintEvenNumbers(int n){
    if(n == 0) return;
    PrintEvenNumbers(n-1);
    if(n % 2 == 0) cout << n << " ";
    return;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Even numbers are: ";
    PrintEvenNumbers(n);
    return 0;
}