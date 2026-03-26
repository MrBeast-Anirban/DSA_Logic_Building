// PROBLEM: Take a character and check whether it’s uppercase, lowercase, a digit, or a special character.

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z') cout << "Upper Case";
    else if(ch >= 'a' && ch <= 'z') cout << "Lower Case";
    else if(ch >=0 && ch <= 9) cout << "Digit";
    else cout << "Special Character";
    return 0;
}