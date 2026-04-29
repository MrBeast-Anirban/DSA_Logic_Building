// PROBLEM: Reverse string but skip spaces.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int n = s.length();
    int i = 0, j = n - 1;
    while(i < j){
        if(s[i] == ' '){
            i++;
        }
        else if(s[j] == ' '){
            j--;
        }
        else{
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    cout << "The string after reversing but keeping spaces is: " << s << endl;
    return 0;
}
/*
Enter a string: a b c d e
The string after reversing but keeping spaces is: e d c b a
Enter a string: Anirban Maitra
The string after reversing but keeping spaces is: artiaMn abirnA
*/