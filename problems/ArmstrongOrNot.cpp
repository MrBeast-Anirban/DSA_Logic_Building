// PROBLEM: Check if a number is an Armstrong number or not.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num, sum = 0, temp, remainder, n = 0;
    cout << "Enter an integer: ";
    cin >> num;
    temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    if (num == sum)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    return 0;
}        