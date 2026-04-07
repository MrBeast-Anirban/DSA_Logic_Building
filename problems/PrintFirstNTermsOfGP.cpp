// PROBLEM: Print first n terms of a geometric progression (a, r).
#include<iostream>
using namespace std;
int main(){
    int a, r, n;
    cout << "Enter the first term (a): ";
    cin >> a;
    cout << "Enter the common ratio (r): ";
    cin >> r;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    cout << "The first " << n << " terms of the geometric progression are: ";
    for(int i = 0; i < n; i++){
        cout << a * pow(r, i) << " ";
    }
    return 0;
}