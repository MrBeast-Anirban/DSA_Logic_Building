// PROBLEM: Count how many alphabets are before ‘m’ and after ‘m’ in a given string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int beforeMCount = 0, afterMCount = 0;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch >= 'a' && ch < 'm' || ch >= 'A' && ch < 'M') beforeMCount++;
        else if(ch > 'm' && ch <= 'z' || ch > 'M' && ch <= 'Z') afterMCount++;
    }
    cout << "Alphabets before 'm': " << beforeMCount << endl;
    cout << "Alphabets after 'm': " << afterMCount << endl;
    return 0;
}
/*
Enter a string: Bat is not dead!
Alphabets before 'm': 7
Alphabets after 'm': 5
*/