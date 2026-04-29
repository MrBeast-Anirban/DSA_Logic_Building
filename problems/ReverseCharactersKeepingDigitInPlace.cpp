// PROBLEM: Reverse only characters, keeping digits in place.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int n = s.length();
    int i = 0, j = n - 1;
    while(i < j){
        if(!isalpha(s[i])){
            i++;
        }
        else if(!isalpha(s[j])){
            j--;
        }
        else{
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    cout << "The string after reversing only characters is: " << s << endl;
    return 0;
}
/*
Enter a string: a1b2c3d4
The string after reversing only characters is: d1c2b3a4
Enter a string: Anirban123
The string after reversing only characters is: nabirnA123
*/