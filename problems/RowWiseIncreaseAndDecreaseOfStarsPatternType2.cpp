// PROBLEM: Type 2: Write a program to print the increasing and decreasing pattern of stars in each row. The number of rows is given as input.
/* 
start
*
**
***
***
**
*
end
*/
#include<iostream>
using namespace std;
int main()[
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
]