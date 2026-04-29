// PROBLEM: Shift each character by 1 (eg., "abc" becomes "bcd").
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        // Handle lowercase letters
        if(c >= 'a' && c <= 'z'){
            result += char('a' + (c - 'a' + 1) % 26);
        }
        // Handle uppercase letters
        else if(c >= 'A' && c <= 'Z'){
            result += char('A' + (c - 'A' + 1) % 26);
        }
        // Keep non-alphabetic characters as is
        else {
            result += c;
        }
    }
    cout << "The string after shifting each character by 1 is: " << result << endl;
    return 0;
}
/*
Enter a string: AnirbanMaitra
The string after shifting each character by 1 is: BojscboNbjusb
*/
