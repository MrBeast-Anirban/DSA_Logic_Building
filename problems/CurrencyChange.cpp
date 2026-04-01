// PROBLEM: Check if an amount can be evenly divided into 2000, 500, and 100 currency notes.
#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    if (amount % 100 != 0) {
        cout << "No";
        return 0;
    }

    int n2000 = amount / 2000;
    amount %= 2000;

    int n500 = amount / 500;
    amount %= 500;

    int n100 = amount / 100;

    cout << "Yes\n";
    cout << "2000 notes: " << n2000 << endl;
    cout << "500 notes: " << n500 << endl;
    cout << "100 notes: " << n100 << endl;

    return 0;
}