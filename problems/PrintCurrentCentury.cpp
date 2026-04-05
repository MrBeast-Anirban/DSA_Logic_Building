// PORBLEM: Take a year and print the corresponding century (e.g.“19th century”, “20th century”).
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    int century = (year - 1) / 100 + 1;

    cout << "The year " << year << " belongs to the " << century << "th century." << endl;

    return 0;
}