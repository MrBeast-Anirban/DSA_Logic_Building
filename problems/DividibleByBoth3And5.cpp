// PROBLEM: Check if a number is both divisible by 3 and 5.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n % 3 == 0 and n % 5 == 0) cout << "Yes";
    else cout << "No";
    return 0;
}