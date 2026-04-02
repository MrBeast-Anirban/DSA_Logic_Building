// PROBLEM: Take three numbers and print the median value (neither maximum nor minimum).
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2)) {
        cout << "The median is: " << num1 << endl;
    } else if ((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1)) {
        cout << "The median is: " << num2 << endl;
    } else {
        cout << "The median is: " << num3 << endl;
    }

    return 0;
}