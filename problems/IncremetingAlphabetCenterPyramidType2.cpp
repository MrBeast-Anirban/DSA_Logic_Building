// PROBLEM: Print the alphaBetic pyramid pattern starting from 'A' in the center of the pyramid without any space. The number of rows is given as input.
/*
    A
   BCD
  EFGHI
 JKLMNOP
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
        for(int k = 1; k <= 2*i-1; k++){
            cout << ch++;
        }
        cout << endl;
    }
    return 0;
}