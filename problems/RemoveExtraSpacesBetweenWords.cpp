// PROBLEM: Remove extra spaces between words (normalize spacing).
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    // Use stringstream to extract words (automatically handles extra spaces)
    stringstream ss(sentence);
    string word;
    string result = "";
    
    while(ss >> word){
        if(result.length() > 0){
            result += " ";
        }
        result += word;
    }
    
    cout << "Sentence after removing extra spaces: " << result << endl;
    
    return 0;
}
/*
Enter a sentence: Bat is    still alive!
Sentence after removing extra spaces: Bat is still alive!
*/