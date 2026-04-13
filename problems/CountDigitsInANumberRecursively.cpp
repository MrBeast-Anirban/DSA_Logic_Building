// PROBLEM: Count the number of digits in a number recursively.
#include<iostream>
using namespace std;
int countDigits(int n){
    if(n == 0) return 0; // Base case: if n is 0 then there is no digits
    return 1+countDigits(n/10); //Recursive case: 1 for the last digit + count of digits in the remaining number.
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number of digits in " << n << " is " << countDigits(n) << endl;
    return 0;
}