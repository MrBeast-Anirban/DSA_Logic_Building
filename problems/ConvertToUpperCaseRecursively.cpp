// PROBLEM: Convert a string to uppercase recursively.
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string convertToUpperCase(string str, int index) {
    // Base case: If the index is equal to the length of the string, return the string
    if (index == str.length()) {
        return str;
    }

    // Convert the current character to uppercase
    str[index] = toupper(str[index]);

    // Recursive call for the next character
    return convertToUpperCase(str, index + 1);
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    cout << "Uppercase string: " << convertToUpperCase(inputString, 0) << endl;
    return 0;
}