// PROBLEM: Print a pyramid pattern of alphabets starting from 'A' in all rows. The number of rows is given as input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= i; j++){
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}