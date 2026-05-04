// PROBLEM: Capitalize the first letter of each word.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    s[0] = toupper(s[0]);
    cout << "The Capitalized String is: ";
    for(int i = 1; i < s.length(); i++){
        if(s[i] == ' '){
            s[i+1] = toupper(s[i+1]);
        }
    }
    cout << s << endl;
    return 0;
}
/*
Enter the string: the bat is not dead
The Capitalized String is: The Bat Is Not Dead
*/