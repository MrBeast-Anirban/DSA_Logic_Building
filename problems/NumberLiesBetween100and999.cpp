// PROBLEM: Check if a number lies within the range [100, 999].
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 100 && number <= 999) {
        cout << "The number " << number << " lies within the range [100, 999]." << endl;
    } else {
        cout << "The number " << number << " does not lie within the range [100, 999]." << endl;
    }

    return 0;
}