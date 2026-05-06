// PROBLEM: Check if a number is an Armstrong number.
#include<iostream>
using namespace std;
int main(){
    int n, temp, power = 0, digit = 0, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    temp = n;
    while(temp != 0){
        power++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0){
        digit = temp%10;
        sum += pow(digit, power);
        temp /= 10;
    }
    if(sum == n) cout << "Armstrong Number." << endl;
    else cout << "Not an Armstrong Number." << endl;
    return 0;
}
/*
Enter the number: 153
Armstrong Number.
Enter the number: 152
Not an Armstrong Number.
*/