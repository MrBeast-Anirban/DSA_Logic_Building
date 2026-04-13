// PROBLEM: Take 5 numbers as input. If the user enters 0, skip it using continue. At the end, print the sum of all non-zero numbers entered.
#include<iostream>
using namespace std;
int main(){
    int sum = 0, num;
    cout << "Enter 5 numbers: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> num;
        if(num == 0) continue; // Skip if the number is 0
        sum += num; // Add non-zero numbers to the sum
    }
    cout << "The sum of all non-zero numbers entered is: " << sum << endl;
    return 0;       
}