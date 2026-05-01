// PROBLEM: Swap first and last words in a sentence.
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    // Extract words from sentence
    vector<string> words;
    stringstream ss(sentence);
    string word;
    
    while(ss >> word){
        words.push_back(word);
    }
    
    // If there are less than 2 words, no swap needed
    if(words.size() < 2){
        cout << "Sentence must have at least 2 words." << endl;
        return 0;
    }
    
    // Swap first and last words
    swap(words[0], words[words.size() - 1]);
    
    // Print the result
    cout << "Sentence after swapping first and last words: ";
    for(int i = 0; i < words.size(); i++){
        cout << words[i];
        if(i < words.size() - 1){
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}
/*
Enter a sentence: You may have adopted the dark but I was born in it!
Sentence after swapping first and last words: it! may have adopted the dark but I was born in You
*/