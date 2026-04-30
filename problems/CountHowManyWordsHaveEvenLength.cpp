// PROBLEM: Count how many words have even length.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int wordLength = 0, evenWords = 0;
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
                wordLength++;
            }
        }
        else{
            if(wordLength % 2 == 0) evenWords++;
            wordLength = 0;
        }
    }
    
    cout << "Numbers of words that are of even length: " << ((wordLength+1)%2)+evenWords << endl;
    return 0;
}
/*
Enter a string: You merely adopted the dark, I was born in it!
Numbers of words that are of even length: 5
Enter a string: You merely adopted the dark, I was born in
Numbers of words that are of even length: 4
*/