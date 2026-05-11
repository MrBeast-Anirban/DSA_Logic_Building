// PROBLEM: Reverse the word of a sentence if the length of the word is even. (Another Approach)

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string sentence;
    getline(cin, sentence);
    
    stringstream ss(sentence);
    string word;
    
    while(ss >> word){
        if(word.length() % 2 == 0){
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }
    cout << endl;
    return 0;
}