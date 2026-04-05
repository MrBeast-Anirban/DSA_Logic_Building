// PROBLEM: Print the sum of all even numbers up to n.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number n: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    cout << "The sum of all even numbers up to " << n << " is: " << sum << endl;
    return 0;
}