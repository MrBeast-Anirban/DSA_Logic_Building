// PROBLEM: Take three numbers and check if they can form a Pythagorean triplet.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Sort the numbers
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);

    // Check if they form a Pythagorean triplet
    if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
        cout << "The numbers can form a Pythagorean triplet." << endl;
    } else {
        cout << "The numbers cannot form a Pythagorean triplet." << endl;
    }

    return 0;
}