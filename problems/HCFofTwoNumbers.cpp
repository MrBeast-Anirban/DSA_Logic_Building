// PROBLEM: Find the HCF (GCD) of two numbers using loops.
#include<iostream>
using namespace std;
int main(){
    int a, b, hcf;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
    }
    cout << "HCF of " << a << " and " << b << " is: " << hcf << endl;
    return 0;
}