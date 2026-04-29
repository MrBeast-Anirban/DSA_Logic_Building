// PROBLEM: Replace all spaces in a string with underscores.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            result += s[i];
        }
        else{
            result += '_';
        }
    }
    cout << "The string after replacing all spaces with underscores is: " << result << endl;
    return 0;
}
/*
Enter a string: You merely adopted the dark, I was born in it!
The string after replacing all spaces with underscores is: You_merely_adopted_the_dark,_I_was_born_in_it!
*/