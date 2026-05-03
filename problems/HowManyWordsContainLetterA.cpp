// PROBLEM: Count how many words contain the letter 'a'.
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    // Extract words and count those containing 'a'
    stringstream ss(sentence);
    string word;
    int count = 0;
    
    while(ss >> word){
        bool containsA = false;
        for(int i = 0; i < word.length(); i++){
            // Check for both lowercase and uppercase 'a'
            if(word[i] == 'a' || word[i] == 'A'){
                containsA = true;
                break;
            }
        }
        if(containsA){
            count++;
        }
    }
    
    cout << "Number of words containing letter 'a': " << count << endl;
    
    return 0;
}
/*
Enter a sentence: You merely adopted the dark, I was born in it.
Number of words containing letter 'a': 3
*/