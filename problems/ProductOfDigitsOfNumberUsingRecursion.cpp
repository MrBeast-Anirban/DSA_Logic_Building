// PROBLEM: Find product of digits of a number recursively.
#include<iostream>
using namespace std;
int Product(int n){
    if(n == 0) return 1; // Base case: product of digits of 0 is 1 (multiplicative identity)
    return (n%10) * Product(n/10); // Recursive case: last digit * product of remaining digits.
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The product of the digits of " << num << " is: " << Product(num) << endl;
    return 0;
}