// PROBLEM: Toggle case for every alternate word in a sentence.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, word = "", new_s = "";
    cout << "Enter the sentence: ";
    getline(cin, s);
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            if(count % 2 == 0){
                for(int j = 0; j < word.length(); j++){
                    if(word[j] >= 'a' && word[j] <= 'z'){
                        new_s += char('A' + (word[j] - 'a'));
                    }
                    else if(word[j] >= 'A' && word[j] <= 'Z'){
                        new_s += char('a' + (word[j] - 'A'));
                    }
                    else{
                        new_s += word[j];
                    }
                }
            }
            else{
                new_s += word;
            }
            new_s += " ";
            count++;
            word = "";
        }
    }
    if(count % 2 == 0){
        for(int j = 0; j < word.length(); j++){
            if(word[j] >= 'a' && word[j] <= 'z'){
                new_s += char('A' + (word[j] - 'a'));
            }
            else if(word[j] >= 'A' && word[j] <= 'Z'){
                new_s += char('a' + (word[j] - 'A'));
            }
            else{
                new_s += word[j];
            }
        }
    }
    else{
        new_s += word;
    }
    cout << new_s << endl;
    return 0;
}
/*
Enter the sentence: It doesnot matter who I am underneath, but what I do that defines me
iT doesnot MATTER who i am UNDERNEATH, but WHAT I DO that DEFINES me
*/
