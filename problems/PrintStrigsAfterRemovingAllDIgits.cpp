// PROBLEM: Print the string after removing all digits.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            // Do nothing, skip the digit
        }
        else{
            result += s[i];
        }
    }
    cout << "The string after removing all digits is: " << result << endl;
}
/*
Enter a string: Batman was Born in 1999 with #982#$51!@ mark in his right wrist.
The string after removing all digits is: Batman was Born in  with ##$!@ mark in his right wrist.
*/