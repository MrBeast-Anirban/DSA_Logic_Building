// PROBLEM: Print factorial of each number from 1 to n.
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
    for(int i = 1; i <= n; i++){
        long long factorials = factorial(i);
        cout << "Factorial of " << i << " is " << factorials << endl;
    }
}