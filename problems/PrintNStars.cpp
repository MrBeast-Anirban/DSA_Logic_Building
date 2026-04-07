// PROBLEM: Given a number print those many stars in a row. For example, if the number is 5 then print *****.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of stars to print: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "*";
    }
    return 0;
}