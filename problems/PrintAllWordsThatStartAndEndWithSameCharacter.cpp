// PROBLEM: Print all words that start and end with the same letter.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string sentence, currentWord = "";
    cout << "Enter the string: ";
    getline(cin, sentence);
    cout << "The Words with same start and end are as follows: " << endl;
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] != ' '){
            if(sentence[i] >= 'a' && sentence[i] <= 'z' || sentence[i] >= 'A' && sentence[i] <= 'Z'){
                currentWord += sentence[i];
            }
        }
        else{
            int n = currentWord.length()-1;
            if(tolower(currentWord[0]) == tolower(currentWord[n])){
                cout << currentWord << endl;
            }
            currentWord = "";
        }
    }
    return 0;
}
/*
Enter the string: Gig played with rubber ball and Nitin sees him!
The Words with same start and end are as follows: 
Gig
rubber
Nitin
sees
*/