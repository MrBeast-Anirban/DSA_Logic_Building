// PROBLEM: Count words that start and end with the same letter.
#include<iostream>
using namespace std;
int main(){
    string s, word = "";
    cout << "Enter the string: ";
    getline(cin, s);
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            if(word[0] == word[word.length()-1]) count++;
            word = "";
        }
    }
    cout << "Total number of strings with same first and last characters is: " << count;
    return 0;
}
/*
Enter the string: I and ana met Batman and he says It doesnot matter who I am underneath, but what I do that defines me
Total number of strings with same first and last characters is: 6
*/