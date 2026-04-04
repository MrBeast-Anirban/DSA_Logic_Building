// PROBLEM: Take day and month and check if it forms a valid calendar date (ignoring leap years).
#include <iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Enter day and month: ";
    cin >> day >> month;

    bool valid = false;

    if (month >= 1 && month <= 12) {
        if (month == 2) {
            if (day >= 1 && day <= 28) {
                valid = true;
            }
        } 
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day >= 1 && day <= 30) {
                valid = true;
            }
        } 
        else {
            if (day >= 1 && day <= 31) {
                valid = true;
            }
        }
    }

    if (valid) {
        cout << "The date is valid." << endl;
    } else {
        cout << "The date is invalid." << endl;
    }

    return 0;
}