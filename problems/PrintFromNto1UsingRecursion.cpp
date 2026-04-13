// PROBLEM: Print from N to 1 using recursion.
#include<iostream>
using namespace std;
 void printNumber(int n){
    if(n == 0) return;
    cout << n << " ";
    printNumber(n-1);
 }
 int main(){
    int n;
    cout << "Emter the number: ";
    cin >> n;
    cout << "Number from " << n << " to 1 are: ";
    printNumber(n);
    return 0;
 }