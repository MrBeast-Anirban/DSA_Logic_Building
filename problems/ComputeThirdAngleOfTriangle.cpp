// PROBLEM: Take two angles of a triangle and compute the third angle.
#include <iostream>
using namespace std;
int main() {
    int angle1, angle2;
    cout << "Enter the first angle: ";
    cin >> angle1;
    cout << "Enter the second angle: ";
    cin >> angle2;

    int angle3 = 180 - (angle1 + angle2);

    cout << "The third angle is: " << angle3 << endl;

    return 0;
}