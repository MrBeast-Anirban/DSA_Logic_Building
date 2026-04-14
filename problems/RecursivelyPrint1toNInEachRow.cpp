// PROBLEM: Print pattern of numbers recursively (1 to n each row).
#include<iostream>
using namespace std;
void printPattern(int n){
    if(n == 0) return; // Base case: no more rows to print
    printPattern(n-1); // Recursive case: print the next row with one less number
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl; // Move to the next line after printing numbers for the current row
}
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);
    return 0;
}