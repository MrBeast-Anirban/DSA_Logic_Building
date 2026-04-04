// PROBLEM: Take three numbers and check if they are in arithmetic progression.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Store the numbers in a vector and sort them
    vector<int> numbers = {a, b, c};
    sort(numbers.begin(), numbers.end());

    // Check if they are in arithmetic progression
    if (numbers[1] - numbers[0] == numbers[2] - numbers[1]) {
        cout << "The numbers are in arithmetic progression." << endl;
    } else {
        cout << "The numbers are not in arithmetic progression." << endl;
    }

    return 0;
}