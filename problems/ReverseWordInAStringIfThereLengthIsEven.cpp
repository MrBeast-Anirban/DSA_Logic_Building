// PROBLEM: Reverse the word of a sentence if the length of the word is even.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s, word = "", rword = "", new_s = "";
    int count = 0;
    cout << "Enter the sentence: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
            rword = s[i] + rword;
            count++;
        }
        else{
            if(word.length() % 2 == 0){
                new_s += rword + " ";
            }
            else{
                new_s += word + " ";
            }
            count = 0;
            rword = "";
            word = "";
        }
    }
    if(word.length() % 2 == 0){
        new_s += rword + " ";
    }
    else{
        new_s += word + " ";
    }
    cout << new_s << endl;
    return 0;
}
/*
Enter the sentence: It doesnot matter who I am underneath, but what I do that defines me.
tI doesnot rettam who I ma underneath, but tahw I od taht defines me.
*/