// PROBLEM: Check whether the string is empty or not.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin, s); // this will include the space in the string if there is any
    if(s.empty()){
        cout << "The string is empty." << endl;
    }
    else{
        cout << "The string is not empty." << endl;
    }
    return 0;
}
/*
Enter the string: 
The string is empty.
Enter the string: anirban maitra
The string is not empty.
*/