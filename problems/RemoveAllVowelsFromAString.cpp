// PROBLEM: Remove all vowels from a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        char ch = tolower(s[i]);
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            result += s[i];
        }
    }
    cout << "The string after removing all vowels is: " << result << endl;
    return 0;
}
/*
Enter a string: You merely adopted the dark, I was born in it!
The string after removing all vowels is: Y mrly dptd th drk,  ws brn n t!
*/