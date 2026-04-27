// PROBLEM: Compare two strings lexicographically (like dictionary order).
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    if(s1 < s2){
        cout << "\"" << s1 << "\" is lexicographically smaller than \"" << s2 << "\"." << endl;
    }
    else if(s1 > s2){
        cout << "\"" << s1 << "\" is lexicographically greater than \"" << s2 << "\"." << endl;
    }
    else{
        cout << "Both strings are equal." << endl;
    }
}