// PROBLEM: Check if two strings are anagrams (without using collections).
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    
    // If lengths are different, they can't be anagrams
    if(str1.length() != str2.length()){
        cout << "The strings are NOT anagrams." << endl;
        return 0;
    }
    
    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    // Compare sorted strings
    if(str1 == str2){
        cout << "The strings ARE anagrams." << endl;
    }
    else{
        cout << "The strings are NOT anagrams." << endl;
    }
    
    return 0;
}