// PROBLEM: Take two numbers and print the larger one among two.

#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (a == b) cout << "Both are equal";
    else if(a > b) cout << a << " is greater";
    else cout << b << " is greater";
}