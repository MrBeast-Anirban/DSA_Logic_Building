// PROBLEM: Remove all spaces from a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            result += s[i];
        }
    }
    cout << "The string after removing all spaces is: " << result << endl;
    return 0;
}
/*
Enter a string: You merely adopted the dark, I was born in it!
The string after removing all spaces is: Youmerelyadoptedthedark,Iwasborninit!
*/