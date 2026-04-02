// PROBLEM: Check whether a number is a perfect square (without using the square root function).
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "The number is not a perfect square." << endl;
        return 0;
    }

    if (number == 0) {
        cout << "The number is a perfect square." << endl;
        return 0;
    }

    for (int i = 1; i * i <= number; i++) {
        if (i * i == number) {
            cout << "The number is a perfect square." << endl;
            return 0;
        }
    }

    cout << "The number is not a perfect square." << endl;
    return 0;
}