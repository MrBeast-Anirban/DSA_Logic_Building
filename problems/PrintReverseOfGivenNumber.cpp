// PROBLEM: Print the reverse of a given number
#include<iostream>
using namespace std;
int main(){
    int n, reverse = 0;
    cout << "Enter the number: ";
    cin >> n;
    while(n > 0){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n /= 10;
    }
    cout << "The reverse of the given number is: " << reverse << endl;
    return 0;
}