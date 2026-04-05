// PROBLEM: Take an integer (1–9999) and check if the sum of its digits is greater than the product of its digits.
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer (1–9999): ";
    cin >> number;

    int sum = 0;
    int product = 1;
    int temp = number;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    if (sum > product) {
        cout << "The sum of the digits is greater than the product of the digits." << endl;
    } else {
        cout << "The sum of the digits is not greater than the product of the digits." << endl;
    }

    return 0;
}