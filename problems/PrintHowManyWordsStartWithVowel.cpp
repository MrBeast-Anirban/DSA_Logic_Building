// PROBLEM: Print how many words start with a vowel in a sentence.
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
            if(!wordStarted){
                wordStarted = true;
                if(tolower(sentence[i]) == 'a' || tolower(sentence[i]) == 'e' || tolower(sentence[i]) == 'i' || tolower(sentence[i]) == 'o' || tolower(sentence[i]) == 'u'){
                    count++;
                }
            }
        }else{
            wordStarted = false;
        }
    }
    cout << "The number of words that start with a vowel is: " << count << endl;
    return 0;
}
/*
Enter a sentence: Anirban is an engineer and he loves to solve problems.
The number of words that start with a vowel is: 5
The words are: "Anirban", "is", "an", "engineer", "and"
*/