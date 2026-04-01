// PROBLEM: Take a 4-digit number and check if the first and last digits are equal.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a 4 digit number: ";
    cin >> num;
    int firstDigit = num / 1000;
    int lastDigit = num % 10;
    if(firstDigit == lastDigit) cout << "First and last digits are equal";
    else cout << "First and last digits are not equal";
    return 0;
}