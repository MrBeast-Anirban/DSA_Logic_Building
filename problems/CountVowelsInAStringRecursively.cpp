// PROBLEM: Count vowels in a string recursively.
#include<iostream>
using namespace std;

int countVowels(string str, int index) {
    if (index >= str.length()) {
        return 0;
    }
    char ch = tolower(str[index]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1 + countVowels(str, index + 1);
    }
    return countVowels(str, index + 1);
}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout << "Number of vowels in the string: " << countVowels(str, 0) << endl;
    return 0;
}
