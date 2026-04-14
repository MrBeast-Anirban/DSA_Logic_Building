// PROBLEM: Print a triangle of stars recursively (top-down).
#include<iostream>
using namespace std;
void printTriangle(int n){
    if(n == 0) return; // Base case: no more rows to print
    printTriangle(n-1); // Recursive case: print the next row with one less star
    for(int i = 0; i < n; i++){
        cout << "* ";
    }
    cout << endl; // Move to the next line after printing stars for the current row
}
int main(){
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;
    printTriangle(n);
    return 0;
}   