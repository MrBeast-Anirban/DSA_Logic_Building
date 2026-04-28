// PROBLEM: Count how many times a given character appears in a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    char target;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter the character to count: ";
    cin >> target;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == target) count++;
    }
    cout << "The character " << target << " appears " << count << " times in the string. " << endl;
    return 0;
}
/*
Enter a string: Darkeness is just the absence of light.
Enter the character to count: s
The character s appears 5 times in the string.
*/