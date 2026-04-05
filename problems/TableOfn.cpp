// PROBLEM: Print the table of a given number (n × 1 to n × 10).
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " × " << i << " = " << n * i << endl;
    }

    return 0;
}