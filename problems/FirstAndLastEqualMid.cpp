// PROBLEM: Take a 3-digit number and check if the sum of the first and last digit equals the middle digit.
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;

    int firstDigit = number / 100;
    int middleDigit = (number / 10) % 10;
    int lastDigit = number % 10;

    if (firstDigit + lastDigit == middleDigit) {
        cout << "The sum of the first and last digit equals the middle digit." << endl;
    } else {
        cout << "The sum of the first and last digit does not equal the middle digit." << endl;
    }

    return 0;
}