// PROBLEM: Take two strings and print them concatenated.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    string concatenated = s1 + s2;
    cout << "Concatenated string: " << concatenated << endl;
    return 0;
}
/*
Enter first string: anirban
Enter second string: maitra
Concatenated string: anirbanmaitra
*/