// PROBLEM: Take a password string and check basic rules (length ≥ 8 and contains at least one uppercase letter, one lowercase letter, and one digit).
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;

    if (password.length() >= 8) {
        for (char c : password) {
            if (isupper(c)) {
                hasUpper = true;
            }
            if (islower(c)) {
                hasLower = true;
            }
            if (isdigit(c)) {
                hasDigit = true;
            }
        }
    }

    if (hasUpper && hasLower && hasDigit) {
        cout << "Valid password." << endl;
    } else {
        cout << "Invalid password." << endl;
    }

    return 0;
}