// PROBLEM: Replace all vowels from a string with stars.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            result += '*';
        } 
        else {    
            result += s[i];
        }
        
    }
    cout << "The string after replacing all vowels with stars is: " << result << endl;
    return 0;
}
/*
Enter a string: You merely adopted the dark, I was born in it!
The string after replacing all vowels with stars is: Y** m*r*ly *d*pt*d th* d*rk, * w*s b*rn *n *t!
*/