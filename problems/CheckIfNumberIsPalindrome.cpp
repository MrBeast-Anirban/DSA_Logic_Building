// PROBLEM: Check if the number is palindrome.
#include<iostream>
using namespace std;
int main(){
    int n, rev = 0, temp;
    cout << "Enter the number: ";
    cin >> n;
    temp = n;
    while(temp != 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if(rev == n){
        cout << n << " is a palindrome number." << endl;
    } else {
        cout << n << " is not a palindrome number." << endl;
    }
    return 0;
}