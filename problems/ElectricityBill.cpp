// PROBLEM: Take electricity units consumed and calculate the bill as per slabs (using if-else).
#include <iostream>
using namespace std;

int main() {
    int units;
    float bill = 0;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.5;
    } else {
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
    }

    cout << "The electricity bill is: Rs. " << bill << endl;

    return 0;
}