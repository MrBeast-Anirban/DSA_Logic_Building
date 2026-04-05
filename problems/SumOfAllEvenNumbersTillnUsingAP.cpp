// PROBLEM: Print the sum of all even numbers up to n using Arithmetic Progression.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number n: ";
    cin >> n;

    // Sum of even numbers from 2 to n is equivalent to sum of AP with first term 2, common difference 2, and last term n if n is even, otherwise n-1
    if (n % 2 == 0) {
        // If n is even
        int terms = n / 2;
        sum = terms * (4 + (terms - 1) * 2) / 2; // Sum of AP
    } else {
        // If n is odd
        int terms = (n - 1) / 2;
        sum = terms * (4 + (terms - 1) * 2) / 2; // Sum of AP
    }

    cout << "The sum of all even numbers up to " << n << " is: " << sum << endl;
    return 0;
}