// PROBLEM: Check if one of two given numbers is a multiple of the other.
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if(num1 % num2 == 0) cout << num1 << " is multiple of " << num2;
    else if(num2 % num1 == 0) cout << num2 << " is multiple of " << num1;
    else cout << "None of the number is multiple of each other";
    return 0;
}