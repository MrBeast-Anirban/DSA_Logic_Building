// PROBLEM: Print a Right-Aligned Triangle of Stars.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < n-i+1; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}