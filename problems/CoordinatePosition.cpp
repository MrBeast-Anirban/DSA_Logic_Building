// PROBLEM: Take coordinates (x, y) and determine which quadrant the point lies in.
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout << "Enter the coordinates (x, y): ";
    cin >> x >> y;
    if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in the First Quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in the Second Quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in the Third Quadrant." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in the Fourth Quadrant." << endl;
    } else if (x == 0 && y == 0) {
        cout << "The point (" << x << ", " << y << ") is at the Origin." << endl;
    } else if (x == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the Y-axis." << endl;
    } else if (y == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the X-axis." << endl;
    }
    return 0;
}