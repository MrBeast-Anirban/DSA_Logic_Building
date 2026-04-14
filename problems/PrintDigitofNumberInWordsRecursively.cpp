// PROBLEM: Print digits of a number in words recursively (e.g., 123 → “one two three”).
#include<iostream>
using namespace std;
void printDigitsInWords(int n){
    if(n == 0) return; // Base case: if n is 0 then there are no digits to print
    printDigitsInWords(n/10); // Recursive case: print the words for the remaining digits first
    int lastDigit = n % 10; // Get the last digit of the number
    switch(lastDigit){ // Print the word corresponding to the last digit
        case 0: cout << "zero "; break;
        case 1: cout << "one "; break;
        case 2: cout << "two "; break;
        case 3: cout << "three "; break;
        case 4: cout << "four "; break;
        case 5: cout << "five "; break;
        case 6: cout << "six "; break;
        case 7: cout << "seven "; break;    
        case 8: cout << "eight "; break;
        case 9: cout << "nine "; break;
        default: cout << "Invalid "; break;
    }
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Digits of " << n << " in words are: ";
    printDigitsInWords(n);
    cout << endl;
    return 0;
}