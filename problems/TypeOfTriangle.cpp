// PROBLEM: If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) cout << "Equilateral triangle";
        else if (a == b || b == c || a == c) cout << "Isosceles triangle";
        else cout << "Scalene triangle";
    }
    else cout << "Not a valid triangle";
    return 0;
}