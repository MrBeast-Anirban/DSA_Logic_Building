// PROBLEM: Reverse a number recursively.
#include<iostream>
using namespace std;
int NumReverse(int n){
    if(n == 0) return 0; // Base case: if n is 0 then the reverse is also 0
    int lastDigit = n % 10; // Get the last digit of the number
    int remainingNumber = n / 10; // Get the remaining number after removing the last digit
    int numDigits = 0; // To count the number of digits in the remaining number
    int temp = remainingNumber;
    
    while(temp > 0){
        temp /= 10;
        numDigits++;
    }
    
    return lastDigit * pow(10, numDigits) + NumReverse(remainingNumber); // Recursive case: last digit becomes the first digit in the reverse, and we add it to the reverse of the remaining number.
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Reverse of " << n << " is " << NumReverse(n) << endl;
    return 0;
}