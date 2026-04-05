// PROBLEM: Take two dates (day and month) and determine which one comes first in the calendar.
#include <iostream>
using namespace std;

int main() {
    int day1, month1, day2, month2;
    cout << "Enter the first date (day month): ";
    cin >> day1 >> month1;
    cout << "Enter the second date (day month): ";
    cin >> day2 >> month2;

    if (month1 < month2) {
        cout << "The first date comes first." << endl;
    } else if (month1 > month2) {
        cout << "The second date comes first." << endl;
    } else {
        if (day1 < day2) {
            cout << "The first date comes first." << endl;
        } else if (day1 > day2) {
            cout << "The second date comes first." << endl;
        } else {
            cout << "Both dates are the same." << endl;
        }
    }

    return 0;
}