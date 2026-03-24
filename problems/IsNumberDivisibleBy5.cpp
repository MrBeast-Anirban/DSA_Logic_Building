// PROBLEM: Check if a number is divisible by 5.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 5 == 0) cout << "Yes";
    else cout << "No";
    return 0;
}