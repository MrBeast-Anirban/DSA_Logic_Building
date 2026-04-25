// Print the first and last character of a string.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if(s.length() > 0){
        cout << "First character: " << s[0] << endl;
        cout << "Last character: " << s[s.length() - 1] << endl;
    } else {
        cout << "String is empty." << endl;
    }
    return 0;
}