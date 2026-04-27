// PROBLEM: Print the ASCII value of each character in a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // this will include the space in the string if there is any, unlike cin >> s which stops at the first space.
    for(int i = 0; i < s.length(); i++){
        cout << "ASCII value of " << s[i] << " is: " << (int)s[i] << endl; // cast the character to int to get its ASCII value.
    }
    return 0;
}
/*
Enter a string: anirban maitra
ASCII value of a is: 97
ASCII value of n is: 110
ASCII value of i is: 105
ASCII value of r is: 114
ASCII value of b is: 98
ASCII value of a is: 97
ASCII value of n is: 110
ASCII value of   is: 32
ASCII value of m is: 109
ASCII value of a is: 97
ASCII value of i is: 105
ASCII value of t is: 116
ASCII value of r is: 114
ASCII value of a is: 97
*/