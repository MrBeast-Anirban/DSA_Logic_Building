// PROBLEM: Remove duplicate characters from a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        //if(result.find(s[i] == string::npos)){ // this is also correct. It means if the character is not found in the result string then only we will add it to the result string. This way we will be adding only the first occurrence of each character to the result string and skipping all the duplicate occurrences.
        if(result.find(s[i]) == -1){ // if the character is not found in the result string then only we will add it to the result string. This way we will be adding only the first occurrence of each character to the result string and skipping all the duplicate occurrences.
            result += s[i];
        }
    }
    cout << "The string after removing duplicate characters is: " << result << endl;
}
/*
Enter a string: anirban
The string after removing duplicate characters is: anirb
Enter a string: maitra
The string after removing duplicate characters is: maitr   
*/