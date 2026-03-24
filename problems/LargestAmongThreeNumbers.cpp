// PROBLEM: Take three numbers and print the largest number among three.

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b and a > c) cout << a << "is greater.";
    else if(b > c) cout << b << "is greater.";
    else cout << c << "is greater.";
    return 0;
}