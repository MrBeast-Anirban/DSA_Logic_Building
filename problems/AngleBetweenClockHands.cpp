// PROBLEM: Take time (hours and minutes) and print the smaller angle between the hour and minute hands.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int hours, minutes;
    cout << "Enter time (hours minutes): ";
    cin >> hours >> minutes;

    // Normalize the hours to be within 0-11
    hours = hours % 12;

    // Calculate the angles of the hour and minute hands
    double hourAngle = (30 * hours) + (0.5 * minutes);
    double minuteAngle = 6 * minutes;

    // Calculate the absolute difference between the angles
    double angleDiff = abs(hourAngle - minuteAngle);

    // The smaller angle is the minimum of the difference and 360 minus the difference
    double smallerAngle = min(angleDiff, 360 - angleDiff);

    cout << "The smaller angle between the hour and minute hands is: " << smallerAngle << " degrees." << endl;

    return 0;
}