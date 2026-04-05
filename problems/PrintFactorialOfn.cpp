// PROBLEM: Print the factorial of a given number.
#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    cout << "Enter the number n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "The factorial of " << n << " is: " << factorial << endl;
    return 0;
}