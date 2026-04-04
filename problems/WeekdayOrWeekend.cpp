// PROBLEM: Take a weekday number (1–7) and determine if it is a weekday or weekend.
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a weekday number (1–7): ";
    cin >> day;

    if (day >= 1 && day <= 5) {
        cout << "It is a weekday." << endl;
    } else if (day >= 6 && day <= 7) {
        cout << "It is a weekend." << endl;
    } else {
        cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }

    return 0;
}