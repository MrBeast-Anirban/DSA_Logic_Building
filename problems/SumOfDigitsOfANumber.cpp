// PROBLEM: Find the sum of digits of a number.
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    cout << "The sum of digits is: " << sum << endl;
    return 0;
}