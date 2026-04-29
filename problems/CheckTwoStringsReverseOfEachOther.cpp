// PROBLEM: Check if two strings are the reverse of each other.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    if(s1.length() != s2.length()){
        cout << "The strings are not reverse of each other" << endl;
        return 0;
    }
    else{
        for(int i = 0, j = s2.length()-1; i < s1.length(); i++, j--){
            if(tolower(s1[i]) != tolower(s2[j])){
                cout << "The strings are not reverse of each other." << endl;
                return 0;
            }
        }
    }
    cout << "The strings are reverse of each other." << endl;
    return 0;
}
/*
1
Enter the first string: anirban
Enter the second string: nabrina
The strings are reverse of each other.
2
Enter the first string: anirban
Enter the second string: maitra
The strings are not reverse of each other
*/