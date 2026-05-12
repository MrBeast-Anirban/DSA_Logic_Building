// PROBLEM: Reverse the word of a sentence if the length of the word is even. (Another Approach)
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string sentence;
    cout << "Enter the sentence: ";
    getline(cin, sentence);
    
    stringstream ss(sentence);
    string word;
    
    while(ss >> word){
        if(word.length() % 2 == 0){
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }
    cout << endl;
    return 0;
}
/*
Enter the sentence: It doesnot matter who I am underneath, but what I do that defines me.
tI doesnot rettam who I ma underneath, but tahw I od taht defines me.
*/