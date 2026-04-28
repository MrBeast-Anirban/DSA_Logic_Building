// PROBLEM: Count how many words end with ‘s’
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int count = 0;
    bool wordStarted = false;
    for(int i = 0; i < sentence.length(); i++){
        if(isalpha(sentence[i])){
            wordStarted = true;
        }else{
            if(wordStarted && tolower(sentence[i-1]) == 's'){
                count++;
            }
            wordStarted = false;
        }
    }
    // Check for the last word if the sentence does not end with a space
    if(wordStarted && tolower(sentence[sentence.length() - 1]) == 's'){
        count++;
    }
    cout << "The number of words that end with 's' is: " << count << endl;
    return 0;
}
/*
Enter a sentence: Anirban is an engineer and he loves to solve problems.
The number of words that end with 's' is: 3
The words are: "is", "loves", "problems"
*/