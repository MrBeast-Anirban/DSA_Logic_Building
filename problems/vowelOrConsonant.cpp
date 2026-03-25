// PROBLEM: Take a character and check if it’s a vowel or consonant.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    ch = tolower(ch);
    if(ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << "Vowel";
    }
    else{
        cout << "Consonant";
    }
}