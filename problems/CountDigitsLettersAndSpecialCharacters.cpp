// PROBLEM: Count the number of digits, letters, and special characters in a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // this will include the space in the string if there is any
    int digitCount = 0, letterCount = 0, specialCount = 0;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch >= '0' && ch <= '9') digitCount++;
        else if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') letterCount++;
        else specialCount++;
    }
    cout << "Digits: " << digitCount << endl;
    cout << "Letters: " << letterCount << endl;
    cout << "Special Characters: " << specialCount << endl;
    return 0;
}
/*
Enter a string: Batman was Born in 1999 with #982#$51!@ mark in his right wrist.
Digits: 9
Letters: 38
Special Characters: 17
*/