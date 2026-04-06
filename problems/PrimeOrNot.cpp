// PROBLEM: Check if a number is prime or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            cout << n << " is not a prime number." << endl;
            return 0;
        }
    }
    cout << n << " is a prime number." << endl;
    return 0;
}