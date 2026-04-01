// PROBLEM: Take two numbers and determine whether both are even, both are odd, or one is even and one is odd.
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter the numbers : ";
    cin >> num1 >> num2;
    if(num1 % 2 == 0 && num2 % 2 == 0) cout << "Both numbers are even";
    else if(num1 % 2 != 0 && num2 % 2 != 0) cout << "Both numbers are odd";
    else cout << "One number is even and one number is odd";
    return 0;
}