// PROBLEM: Take two numbers and check if both are positive and their sum is less than 100.
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > 0 && num2 > 0 && (num1 + num2) < 100) {
        cout << "Both numbers are positive and their sum is less than 100." << endl;
    } else {
        cout << "Either one or both numbers are not positive, or their sum is not less than 100." << endl;
    }

    return 0;
}