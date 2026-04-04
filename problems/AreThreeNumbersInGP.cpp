// PROBLEM: Take three numbers and check if they are in geometric progression.
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Check if they are in geometric progression
    if (b * b == a * c && a != 0 && c != 0) {
        cout << "The numbers are in geometric progression." << endl;
    } else {
        cout << "The numbers are not in geometric progression." << endl;
    }

    return 0;
}