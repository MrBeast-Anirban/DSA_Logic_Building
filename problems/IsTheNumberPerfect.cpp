// PROBLEM: Check if a number is a perfect number.
// A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and their sum is 6 (1 + 2 + 3 = 6). Another example is 28, which has proper divisors 1, 2, 4, 7, and 14, and their sum is also 28 (1 + 2 + 4 + 7 + 14 = 28).
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}