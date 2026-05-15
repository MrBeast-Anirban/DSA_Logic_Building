// PROBLEM: Find the word with maximum vowels in a sentence.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, word = "", maxVowelWord = "";
    int maxVowelCount = 0;
    cout << "Enter the sentence: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            int vowelCount = 0;
            for(int j = 0; j < word.length(); j++){
                if(word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u' || word[j] == 'A' || word[j] == 'E' || word[j] == 'I' || word[j] == 'O' || word[j] == 'U'){
                    vowelCount++;
                }
            }
            if(vowelCount > maxVowelCount){
                maxVowelCount = vowelCount;
                maxVowelWord = word;
            }
            word = "";
            vowelCount = 0;
        }
    }
    cout << "The word with maximum vowels in the sentence is \"" << maxVowelWord << "\" with " << maxVowelCount << " vowels." << endl;
    return 0;
}
/*
Enter the sentence: It doesnot matter who I am underneath, but what I do that defines me.
The word with maximum vowels in the sentence is "underneath," with 4 vowels.
*/