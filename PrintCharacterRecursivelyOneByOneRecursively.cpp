// PROBLEM: Print all characters of a string one by one recursively.
#include <iostream>
#include <string>   
using namespace std;
void printCharacters(string str, int index) {
    // Base case: If the index is equal to the length of the string, return
    if (index == str.length()) {
        return;
    }
    
    // Print the current character
    cout << str[index] << endl;
    
    // Recursive call for the next character
    printCharacters(str, index + 1);
}
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);  
    cout << "Characters in the string: ";
    printCharacters(inputString, 0);
    cout << endl;
    return 0;
}