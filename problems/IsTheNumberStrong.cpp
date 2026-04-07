// PROBLEM: Check if a number is a strong number (sum of factorials of digits = number).
#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}
int main(){
    int n, sum = 0, temp;       
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while(temp > 0){
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if(sum == n){
        cout << n << " is a strong number." << endl;
    } 
    else {
        cout << n << " is not a strong number." << endl;
    }
    return 0;
}