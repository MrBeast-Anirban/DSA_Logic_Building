// PROBLEM: Count consonants and vowels separately using recursion.
#include <iostream>
#include <string>   
using namespace std;    
void countVowelsAndConsonants(const string& str, int index, int& vowelCount, int& consonantCount) {
    if (index >= str.length()) {
        return; // Base case: end of string
    }

    char currentChar = tolower(str[index]); // Convert to lowercase for uniformity

    // Check if the current character is a vowel
    if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
        vowelCount++;
    }
    // Check if the current character is a consonant (assuming only letters)
    else if (isalpha(currentChar)) {
        consonantCount++;
    }

    // Recursive call for the next character
    countVowelsAndConsonants(str, index + 1, vowelCount, consonantCount);
}
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    int vowelCount = 0;
    int consonantCount = 0;
    countVowelsAndConsonants(inputString, 0, vowelCount, consonantCount);
    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonantCount << endl;
    return 0;
}