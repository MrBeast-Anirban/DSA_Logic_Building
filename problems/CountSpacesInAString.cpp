// PROBLEM: Count how many spaces are there in a sentence.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int spaceCount = 0;
    cout << "Enter a sentence: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') spaceCount++;
    }
    cout << "Number of spaces:  " << spaceCount << endl;
    return 0;
}/*
Enter a sentence: It doesn't matter who I am underneath, but what I do that defines me!.
Number of spaces:  13
*/