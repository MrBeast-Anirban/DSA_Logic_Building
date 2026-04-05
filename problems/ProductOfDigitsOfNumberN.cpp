// PROBLEM:  Print the product of digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int product = 1;
    while(n != 0){
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    cout << "The product of digits is: " << product << endl;
}