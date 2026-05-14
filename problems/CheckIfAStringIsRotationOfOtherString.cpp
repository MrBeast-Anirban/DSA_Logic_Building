// PROBLEM: Check if two strings are rotations of each other.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1, str2;
    cout << "Enter string 1: ";
    getline(cin, str1);
    cout << "Enter string 2: ";
    getline(cin, str2);
    
    // If lengths are different, they can't be rotations
    if(str1.length() != str2.length()){
        cout << "The strings are NOT rotations of each other." << endl;
        return 0;
    }
    
    // Concatenate str1 with itself
    // If str2 is a rotation of str1, it will be a substring of str1+str1
    string temp = str1 + str1;
    
    // Check if str2 is a substring of temp
    if(temp.find(str2) != string::npos){
        cout << "The strings ARE rotations of each other." << endl;
    }
    else{
        cout << "The strings are NOT rotations of each other." << endl;
    }
    
    return 0;
}
/*
Enter string 1: anirban maitra
Enter string 2: maitraanirban 
The strings ARE rotations of each other.
*/