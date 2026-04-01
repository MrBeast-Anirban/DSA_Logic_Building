// PROBLEM: Take a 3-digit number and check if all digits are distinct.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a 3 digit number: ";
    cin >> num;
    int digit1 = num % 10; //Extract the ones position digit
    int digit2 = num / 10 % 10; //Extract the tens position digit
    int digit3 = num / 100; //Extract the hundreadth position digit
    if(digit1 != digit2 && digit2 != digit3 && digit3 != digit1) cout << "All digits are distinct";
    else cout << "Digits are not distincts";
    return 0;
}