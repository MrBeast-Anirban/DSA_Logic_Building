// PROBLEM: Take three sides and check if they form a valid triangle.

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a) cout << "Valid Triangle";
    else cout << "Invalid Triangle";
    return 0;
}