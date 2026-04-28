// PROBLEM: Reverse a string without using built-in reverse.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    string reversed = "";
    for(int i = s.length() - 1; i >= 0; i--){
        reversed += s[i];
    }
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
/*
Enter a string: Batman is the best hero in the world.
Reversed string: .dlrow eht ni oreh tseb eht si namtaB
*/