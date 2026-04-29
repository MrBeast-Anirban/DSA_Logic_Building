// PROBLEM: Remove consecutive duplicate characters (e.g., "aaabbcaaa" becomes "abca").
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    if(s.empty()){
        cout << "Empty string error." << endl;
        return 0;
    }
    result += s[0]; // Add the first character to the result string as it will always be included in the result string.
    for(int i = 1; i < s.length(); i++){
        if(s[i] != s[i-1]){
            result += s[i]; // Add the current character to the result string only if it is different from the previous character.
        }
    }
    cout << "The string after removing consecutive duplicate characters is: " << result << endl;
    return 0;
}