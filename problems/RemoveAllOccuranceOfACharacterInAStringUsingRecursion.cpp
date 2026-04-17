// Problem: Remove all occurrences of the given character in a string using recursion
#include <iostream>
#include <string>
using namespace std;    
string removeCharacter(string str, char oldChar, char newChar, int index){
    if(index == str.length()){
        return "";
    }
    char currentChar = str[index];
    string remainingString = removeCharacter(str, oldChar, newChar, index + 1);
    if(currentChar == oldChar){
        return remainingString;
    } else {
        return currentChar + remainingString;
    }
}
/* other way to do it
string removeCharacter(string str, char oldChar, char newChar, int index){
    if(index == str.length()){
        return "";
    }
    char currentChar = str[index];
    if(currentChar == oldChar){
        return removeCharacter(str, oldChar, newChar, index+1);
    }
    return currentChar + removeCharacter(str, oldChar, newChar, index+1);
}
*/
int main() {
    string str;
    char oldChar, newChar;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to be removed: ";
    cin >> oldChar;
    cout << "String after removal: " << removeCharacter(str, oldChar, newChar, 0) << endl;
    return 0;
}

