// PROBLEM: Print the sum of all odd numbers up to n using AP.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number n: ";
    cin >> n;

    // Sum of odd numbers from 1 to n is equivalent to sum of AP with first term 1, common difference 2, and last term n if n is odd, otherwise n-1
    if (n % 2 == 1) {
        // If n is odd
        int terms = (n + 1) / 2;
        sum = terms * (2 + (terms - 1) * 2) / 2; // Sum of AP
    } else {
        // If n is even
        int terms = n / 2;
        sum = terms * (2 + (terms - 1) * 2) / 2; // Sum of AP
    }

    cout << "The sum of all odd numbers up to " << n << " is: " << sum << endl;
    return 0;
}