// PROBLEM: Take income and age, and check if eligible for tax (age > 18 and income > 5 L).
#include <iostream>
using namespace std;

int main() {
    int age;
    float income;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter income: ";
    cin >> income;

    if (age > 18 && income > 500000) {
        cout << "Eligible for tax." << endl;
    } else {
        cout << "Not eligible for tax." << endl;
    }

    return 0;
}