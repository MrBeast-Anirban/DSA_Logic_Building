// PROBLEM: Print a pyramid pattern of numbers starting from '1' in all rows. The number of rows is given as input.
/*
1
1 2 
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int num = 1;
        for(int j = 1; j <= i; j++){
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}