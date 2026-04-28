// PROBLEM: Reverse the order of words in a sentence.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter the sentence: ";
    getline(cin, s);
    string reversed = "";
    string currentWord = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            if(reversed.length() == 0){
                reversed = currentWord;
            }
            else{
                reversed = currentWord + " " + reversed;
            }
            currentWord = "";
        }
        else{
            currentWord = currentWord + s[i];
        }
    }
    //for last word
    if(reversed.length() == 0){
        reversed = currentWord;
    }
    else{
        reversed = currentWord + " " + reversed;
    }
    cout << "Reversed sentence: " << reversed << endl;
    return 0;
}
/*
Enter the sentence: Bat is not dead.
Reversed sentence: dead. not is Bat
*/