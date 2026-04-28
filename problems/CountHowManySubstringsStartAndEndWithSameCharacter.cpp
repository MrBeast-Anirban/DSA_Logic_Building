// PROBLEM: Count how many substrings start and end with the same character (simple logic).
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        for(int j = i; j < s.length(); j++){
            if(s[i] == s[j]) count++;
        }
    }
    cout << "The number of substrings that start and end with the same character is: " << count << endl;
    return 0;
}
/*
Enter a string: anirban
The number of substrings that start and end with the same character is: 10
The substrings are: "a", "anirbana", "n", "nirban", "i", "r", "b", "a", "n", "anirban"
*/