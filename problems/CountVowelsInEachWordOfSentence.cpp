// PROBLEM: Count vowels in each word of a sentence.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s, word = "";
    int count = 0;
    cout << "Enter the sentence: ";
    getline(cin, s);
    cout << "The count of vowels in each word: " << endl;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                count++;
            }
        }
        else{
            cout << word << " : " << count << endl;
            count = 0;
            word = "";
        }
    }
    cout << word << " : " << count << endl;
    return 0;
}
/*
Enter the sentence: It doesnot matter who I am underneath, but what I do that defines me.
The count of vowels in each word: 
It : 1
doesnot : 3
matter : 2
who : 1
I : 1
am : 1
underneath, : 4
but : 1
what : 1
I : 1
do : 1
that : 1
defines : 3
me. : 1
*/