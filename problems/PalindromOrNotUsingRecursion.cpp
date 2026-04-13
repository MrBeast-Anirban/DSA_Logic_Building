// PROBLEM: Check if a number is a palindrome using recursion.
#include<iostream>
using namespace std;
int Palindrome(int num, int rev){
    if(num == 0) return rev;
    rev = rev * 10 + num % 10; // Update rev to include the last digit of num
    return Palindrome(num/10, rev); // Recursive call with the remaining number and updated rev
}
int main(){
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;
    Palindrome(num, rev) == num? cout << num << " is a palindrome." : cout << num << " is not a palindrome.";
    return 0;
}