// PROBLEM: Find the sum of digits of a number (use loop).
#include<iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout << "Enter the number: ";
    cin >> num;
    while(num != 0){
        int digit = num%10;
        sum += digit;
        num /= 10;
    }
    cout << "The sum of digits of number is: " << sum;
    return 0;
}
/*
Enter the number: 12345
The sum of digits of number is: 15
*/