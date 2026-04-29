// PROBLEM: Remove the first and last character and print the remaining string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if(s.length() <= 2){
        cout << "String must have more than 2 characters to remove first and last character." << endl;
        return 0;
    }
    string remaining = "";
    for(int i = 1; i < s.length() - 1; i++){
        remaining += s[i];
    }
    cout << "The remaining string after removing first and last character is: " << remaining << endl;
    return 0;
}
/*
Enter a string: anirban
The remaining string after removing first and last character is: nirban
Enter a string: maitra
The remaining string after removing first and last character is: aitra
*/