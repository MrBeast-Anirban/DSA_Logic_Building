// PROBLEM: Take a string input and print its length.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    // input can also be taken as getline(cin, s); to include spaces in the string
    cout << "Length of the string is: " << s.length() << endl;
    return 0;
}
/*
Enter a string: anirban
Length of the string is: 7

Enter a string: anirban maitra
Length of the string is: 7
*/