// PROBLEM: Reverse a string using recursion.
#include<iostream>
using namespace std;
string reverseString(string str) {
    if (str.empty()) {
        return "";
    }
    return str.back() + reverseString(str.substr(0, str.size() - 1));
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Reversed string: "<<reverseString(str)<<endl;
    return 0;
}
