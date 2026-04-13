// PROBLEM: Print factorial of a number recursively.
#include<iostream>
using namespace std;
long long factorial(int num){
    if(num == 0 || num == 1) return 1;
    return num * factorial(num-1);
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}