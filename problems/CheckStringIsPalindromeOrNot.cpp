// PROBLEM: Check whether a string is a palindrome.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    for(int i = 0, j = s.length()-1; i < j; i++, j--){
        if(tolower(s[i]) != tolower(s[j])){
            cout << "The string is not a palindrome." << endl;
            return 0;
        }
    }
    cout << "The string is a palindrome." << endl;
    return 0;
}
/*
Enter a string: anirban
The string is not a palindrome.
Enter a string: racecar
The string is a palindrome.
Enter a string: Racecar
The string is a palindrome.
*/