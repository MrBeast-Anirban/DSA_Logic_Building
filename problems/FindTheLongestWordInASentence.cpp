// PROBLEM: Find the longest word in a sentence.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, currentWord = "", LongestWord = "";
    int current = 0, maxWordLength = 0;
    cout << "Enter the string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
                current++;
                currentWord += s[i];
            }
        }
        else{
            if(maxWordLength < current){
                maxWordLength = current;
                LongestWord = currentWord;
            }
            current = 0;
            currentWord = "";
        }
    }
    if(maxWordLength < current){
        maxWordLength = current;
        LongestWord = currentWord;
    }
    cout << "The longest in the sentence is \"" << LongestWord << "\" of length " << maxWordLength << endl;
    return 0;
}