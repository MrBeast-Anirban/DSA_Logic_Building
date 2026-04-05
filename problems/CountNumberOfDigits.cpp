// PROBLEM: Count the number of digits in a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    cout << "The number of digits is: " << count << endl;
}