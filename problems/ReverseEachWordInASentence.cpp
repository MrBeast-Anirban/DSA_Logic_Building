// PROBLEM: Reverse each word in a sentence.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    string reversed = "";
    string currentWord = "";
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == ' '){
            // Reverse the current word and add it to the result
            for(int j = currentWord.length() - 1; j >= 0; j--){
                reversed += currentWord[j];
            }
            reversed += ' ';
            currentWord = "";
        }else{
            currentWord += sentence[i];
        }
    }
    // Reverse the last word and add it to the result
    for(int j = currentWord.length() - 1; j >= 0; j--){
        reversed += currentWord[j];
    }
    cout << "Sentence with reversed words: " << reversed << endl;
    return 0;
}
/*
Enter a sentence: Anirban is an engineer and he loves to solve problems.
Sentence with reversed words: nabrinA si na reenigne dna eh sevol ot evlos .smelborp
*/