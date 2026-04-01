// PROBLEM: Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a 3 digit number: ";
    cin >> num;
    int digit1 = num % 10; //Extract the ones position digit
    int digit2 = num / 10 % 10; //Extract the tens position digit
    int digit3 = num / 100; //Extract the hundreadth position digit
    if(digit2 > digit1 && digit2 > digit3) cout << "Middle digit is the largest";
    else if(digit2 < digit1 && digit2 < digit3) cout << "Middle digit is the smallest";
    else cout << "Middle digit is neither the largest nor the smallest";
    return 0;
}