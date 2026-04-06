// PROBLEM: Print all prime numbers between 1 and 100.
#include<iostream>
using namespace std;
int main() {
    cout << "Prime numbers between 1 and 100 are: " << endl;
    for (int num = 2; num <= 100; num++) {
        bool isPrime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}