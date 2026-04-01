// PROBLEM: Check if a number is a multiple of 7 or ends with 7.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num % 7 == 0 || num % 10 == 7) cout << "Number is a multiple of 7 or ends with 7";
    else cout << "Number is neither a multiple of 7 nor ends with 7";
    return 0;
}