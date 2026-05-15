// PROBLEM: Remove duplicate words from a sentence.
#include<iostream>
#include<string>
#include<sstream>
#include<unordered_set>
using namespace std;
int main(){
    string sentence, word, result = "";
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    unordered_set<string> seenWords;
    stringstream ss(sentence);
    while(ss >> word){
        if(seenWords.find(word) == seenWords.end()){
            seenWords.insert(word);
            if(!result.empty()){
                result += " ";
            }
            result += word;
        }
    }
    cout << "Sentence after removing duplicate words: " << result << endl;
    return 0;
}
/*
Enter a sentence: You merely adopted adopted the dark I was was born in in it                       
Sentence after removing duplicate words: You merely adopted the dark I was born in it
*/