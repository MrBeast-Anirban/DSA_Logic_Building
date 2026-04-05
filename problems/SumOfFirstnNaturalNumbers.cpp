// PROBLEM: Print the sum of first n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter the number n: ";
    cin >> n;
    sum = (n*(n+1))/2;
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}