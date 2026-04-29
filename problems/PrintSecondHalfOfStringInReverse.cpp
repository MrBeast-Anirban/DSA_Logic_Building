// PROBLEM: Print the second half of the string in reverse.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, secondHalfReversed = "";
    cout << "Enter a string: ";
    cin >> s;
    if(s.length() == 0){
        cout << "Empty sting error." << endl;
        return 0;
    }
    int i = 0, j = s.length()-1;
    for(; i <= j; i++, j--){ // At the end of this we will be at half of the string. If the length is odd then i and j will be at the same position, if the length is even then j will be just before i.
        secondHalfReversed  = s[j] + secondHalfReversed; // we are building the second half in reverse order.
    }
    cout << "The second half of the string in reverse is: " << secondHalfReversed << endl;
}
/*
Enter a string: anirban
The second half of the string in reverse is: rban
Enter a string: maitra
The second half of the string in reverse is: tra
*/