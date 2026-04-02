// PROBLEM: Take 24-hour time (hours and minutes) and print whether it is AM or PM.
#include <iostream>
using namespace std;

int main() {
    int hours, minutes;
    cout << "Enter the time in 24-hour format (hours and minutes): ";
    cin >> hours >> minutes;

    if (hours < 12) {
        cout << "The time is: " << hours << ":" << minutes << " AM" << endl;
    } else {
        cout << "The time is: " << hours - 12 << ":" << minutes << " PM" << endl;
    }

    return 0;
}