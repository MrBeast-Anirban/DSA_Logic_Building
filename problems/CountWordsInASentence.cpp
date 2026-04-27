// PROBLEM: Count how many words are in a sentence.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            count++;
        }
    }
    cout << "Number of words: " << count + 1 << endl;
    return 0;
}
/*
Enter a sentence: anirban maitra is a software engineer.
Number of words: 6
*/