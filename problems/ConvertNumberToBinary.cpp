// PROBLEM: Convert a number to binary recursively.
#include<iostream>
using namespace std;

void ConvertToBinary(int n) {
    if (n == 0) return;
    ConvertToBinary(n / 2);
    cout << n % 2;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Binary representation of " << num << " is: ";
    ConvertToBinary(num);
    cout << endl;
    return 0;
}