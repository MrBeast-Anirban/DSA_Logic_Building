// PROBLEM: Print the Row wise alphabet incrementing in a left aligned pyramid pattern.
/*
A
B B
C C C
D D D D 
E E E E E 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    return 0;
}