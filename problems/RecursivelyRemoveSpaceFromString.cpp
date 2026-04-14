// PROBLEM: Remove all spaces from a string recursively.
#include<iostream>
using namespace std;

string removeSpaces(string str, int index) {
    if (index >= str.length()) {
        return "";
    }
    if (str[index] == ' ') {
        return removeSpaces(str, index + 1);
    }
    return str[index] + removeSpaces(str, index + 1);
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // FIX: reads full line with spaces
    
    cout << "String after removing spaces: " 
         << removeSpaces(str, 0) << endl;
    
    return 0;
}