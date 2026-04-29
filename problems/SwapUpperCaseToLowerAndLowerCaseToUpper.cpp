// PROBLEM: Swap case: uppercase → lowercase and lowercase → uppercase.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(s[i] >= 'a' && s[i] <= 'z'){
            result += toupper(s[i]);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            result += tolower(s[i]);
        }
        else{
            result += s[i];
        }
    }
    cout << "The string after swapping cases is: " << result << endl;
    return 0;
}