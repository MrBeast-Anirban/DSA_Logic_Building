// PROBLEM: Find sum of digits of a number recursively.
#include<iostream>
using namespace std;
int sum(int n){
    if(n == 0) return 0; // Base case: sum of digits of 0 is 0
    return (n%10)+sum(n/10); // Recursive case: last digit + sum of digits of the rest of the number
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The sum of the digits of " << n << " is: " << sum(n) << endl;
    return 0;
}