// PROBLEM: Print pattern of characters (A, AB, ABC, ...) recursively.
#include<iostream>
using namespace std;
void printPattern(int n){
    if(n == 0) return; // Base case: no more characters to print
    printPattern(n-1); // Recursive case: print the next pattern with one less character
    for(int i = 0; i < n; i++){
        cout << char('A' + i) << " "; // Print characters from 'A' to 'A' + n - 1
    }
    cout << endl; // Move to the next line after printing the current pattern
}
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);
    return 0;
}