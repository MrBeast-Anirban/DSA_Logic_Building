// PROBLEM: Convert all characters of a string to lowercase.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // this will include the space in the string if there is any, unlike cin >> s which stops at the first space
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + ('a' - 'A'); // convert to lowercase by adding the difference between 'a' and 'A'
        }
    }
    cout << "String in lowercase: " << s << endl;
    return 0;
}
/*
Enter a string: ANIRBAN
String in lowercase: anirban
*/