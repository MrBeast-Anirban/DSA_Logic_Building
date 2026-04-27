// PROBLEM: Count how many vowels and consonants are in a string.
#include<iostream>
using namespace std;
int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin, s); // this will include the space in the string if there is any
    int vowelCount = 0, consonantCount = 0;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') vowelCount++;
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) consonantCount++;
        else continue; // ignore any other characters like spaces, punctuatuon, etc;
    }
    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonantCount << endl;
    return 0;
}
/*
Enter the string: Once upon a time there lived a ghost!
Vowels: 13
Consonants: 16
*/