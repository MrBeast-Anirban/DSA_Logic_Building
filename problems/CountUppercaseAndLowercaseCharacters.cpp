// PROBLEM: Count how many uppercase and lowercase letters a string has.
#include<iostream>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s); 
    int uppercaseCount = 0, lowercaseCount = 0;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z') uppercaseCount++;
        else if(ch >= 'a' && ch <= 'z') lowercaseCount++;
    }
    cout << "Uppercase letters count: " << uppercaseCount << endl;
    cout << "Lowercase letters count: " << lowercaseCount << endl;
    return 0;
}
/*
Enter a string: Gotham is sick and only BATMAN can cure it!.                   
Uppercase letters count: 7
Lowercase letters count: 27
*/