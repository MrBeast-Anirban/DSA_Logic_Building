// PROBLEM: Count how many characters (excluding spaces) are in the string.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            count++;
        }
    }
    cout << "Number of characters (excluding spaces): " << count << endl;
    return 0;
}
/*
Enter a string: anirban maitra
Number of characters (excluding spaces): 13
*/