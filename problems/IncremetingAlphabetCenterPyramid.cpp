// PROBLEM: Print the alphaBetic pyramid pattern starting from 'A' in the center of the pyramid. The number of rows is given as input.
/*
    A
   B C
  D E F
 G H I J
K L M N O
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}