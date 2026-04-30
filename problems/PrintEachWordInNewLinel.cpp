// PROBLEM: Print each word of a sentence on a new line.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Words in this string is: ";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            cout << result << endl;
            result = "";
        }
        else{
            result += s[i];
        }
    }
    cout << result << endl;
    return 0;
}
/*
Enter a string: You merely adopted the dark, I was bon in it! molded by it.
Words in this string is: You
merely
adopted
the
dark,
I
was
bon
in
it!
molded
by
it.
*/