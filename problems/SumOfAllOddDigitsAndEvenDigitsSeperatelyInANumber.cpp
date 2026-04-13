// PROBLEM: Print the sum of all odd digits and even digits separately in a number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sumOdd = 0, sumEven = 0;
    while(num > 0){
        int digit = num % 10;
        digit % 2 == 0 ? sumEven += digit : sumOdd += digit;
        num /= 10;
    }
    cout << "Sum of odd digits: " << sumOdd << endl;
    cout << "Sum of even digits: " << sumEven << endl;
    return 0;
}