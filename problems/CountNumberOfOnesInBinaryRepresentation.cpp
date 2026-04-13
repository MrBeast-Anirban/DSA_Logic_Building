// PROBLEM: Print all numbers from 1–n whose binary representation has an even number of 1s.
#include<iostream>
using namespace std;
int countOnes(int num){
    int count = 0;
    while(num > 0){
        count += num & 1; // Increment count if the last bit is 1
        num >>= 1; // Right shift to check the next bit
    }
    return count;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Numbers from 1 to " << n << " with an even number of 1s in their binary representation are: " << endl;
    for(int i = 1; i <= n; i++){
        if(countOnes(i) % 2 == 0){
            cout << i << " ";
        }
    }
    return 0;
}   