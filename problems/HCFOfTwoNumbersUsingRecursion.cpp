// PROBLEM: Find GCD (HCF) of two numbers using Euclid’s algorithm recursively.
#include<iostream>
using namespace std;
int HCF(int a, int b){
    if(b == 0) return a; //base case: If b is 0, then the HCF is a
    return HCF(b, a % b); //recursive case: HCF(a, b) = HCF(b, a mod b)
}
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The HCF(GCD) of " << a << " and " << b << " is " << HCF(a, b) << endl;
    return 0;
}