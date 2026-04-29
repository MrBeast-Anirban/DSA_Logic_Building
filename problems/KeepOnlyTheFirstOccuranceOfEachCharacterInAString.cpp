// PROBLEM: Keep only the first occurrence of each character.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(result.find(s[i]) == string::npos){
            result += s[i];
        }
    }
    cout << "The string after keeping only the first occurance of each character is: " << result << endl;
    return 0;
}
/*
Enter a string: anirban
The string after keeping only the first occurance of each character is: anirb
Enter a string: maitra
The string after keeping only the first occurance of each character is: maitr
*/