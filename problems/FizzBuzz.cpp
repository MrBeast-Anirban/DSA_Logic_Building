// PROBLEM: Take a number and print “Fizz” if divisible by 3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both.
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "FizzBuzz" << endl;
    } else if (number % 3 == 0) {
        cout << "Fizz" << endl;
    } else if (number % 5 == 0) {
        cout << "Buzz" << endl;
    } else {
        cout << number << endl;
    }
    return 0;
}