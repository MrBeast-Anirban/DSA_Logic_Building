// Problem: Replace all occurrences of a character (say 'a' to 'z') using recursion
#include<iostream>
using namespace std;

string replaceCharacter(string str, char oldChar, char newChar, int index) {
    if (index >= str.length()) {
        return "";
    }
    if (str[index] == oldChar) {
        return newChar + replaceCharacter(str, oldChar, newChar, index + 1);
    }
    return str[index] + replaceCharacter(str, oldChar, newChar, index + 1);
}

int main(){
    string str;
    char oldChar, newChar;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to be replaced: ";
    cin >> oldChar;
    cout << "Enter the new character: ";
    cin >> newChar;
    cout << "String after replacement: " << replaceCharacter(str, oldChar, newChar, 0) << endl;
    return 0;
}