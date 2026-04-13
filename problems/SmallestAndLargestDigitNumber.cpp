// PROBLEM: Find the smallest and largest digit in a given number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int smallest = 9, largest = 0;
    while(num > 0){
        int digit = num % 10;
        if(digit < smallest) smallest = digit;
        if(digit > largest) largest = digit;
        num /= 10;
    }
    cout << "Smallest digit: " << smallest << endl;
    cout << "Largest digit: " << largest << endl;
    return 0;
}