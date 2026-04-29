// PROBLEM: Print the middle character(s) of a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if(s.length() == 0){
        cout << "Empty sting error." << endl;
        return 0;
    }
    int i = 0, j = s.length()-1;
    for(; i < j; i++, j--);
    if(i == j){
        cout << "The middle character of the string is: " << s[i] << endl; // odd length string.
    }
    else{
        cout << "The middle characters of the string are: " << s[j] << " and " << s[i] << endl; // even length string. At this point j must have escaped i.
    }
    return 0;
}
/*
Enter a string: anirban
The middle character of the string is: r
Enter a string: maitra
The middle characters of the string are: t and i
*/