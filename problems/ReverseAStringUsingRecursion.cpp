// PROBLEM: Print the string in reverse order recursively (without using loops).
#include<iostream>
#include<string>
using namespace std;
string reverseString(string str, string rev, int index){
    if(index == str.length()) return rev;
    rev = str[index] + rev;
    return reverseString(str, rev, index+1);
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    string rev = "";
    cout<<"Reversed string: "<<reverseString(str, rev, 0)<<endl;
    return 0;
}