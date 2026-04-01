// PROBLEM: Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter an alphabet character: ";
    cin >> ch;
    if(ch >= 'a' && ch <= 'm') cout << "Character lies between ‘a’ and ‘m’";
    else if(ch >= 'n' && ch <= 'z') cout << "Character lies between ‘n’ and ‘z’";
    else cout << "Invalid input";
    return 0;
}