// PROBLEM: Find the shortest word in a sentence.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, currentWord = "", shortestWord = "";
    int current = 0, minWordLength = INT_MAX;
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
            if(minWordLength > current){
                minWordLength = current;
                shortestWord = currentWord;
            }
            current = 0;
            currentWord = "";
        }
    }
    if(minWordLength > current){
        minWordLength = current;
        shortestWord = currentWord;
    }
    cout << "The longest in the sentence is \"" << shortestWord << "\" of length " << minWordLength << "." << endl;
    return 0;
}
/*
Enter the string: You merely adopted the dark, I was born in it!
The longest in the sentence is "I" of length 1.
*/