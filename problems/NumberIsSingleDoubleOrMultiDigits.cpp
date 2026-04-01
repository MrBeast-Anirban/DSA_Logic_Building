// PROBLEM: Check whether a given integer is single-digit, double-digit, or multi-digit.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if(num >= 0 && num <= 9) cout << "Single-digit";
    else if(num >= 10 && num <= 99) cout << "Double-digit";
    else cout << "Multi-digit";
    return 0;
}