// PROBLEM: Print numbers between a and b divisible by 7.
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Numbers between " << a << " and " << b << " divisible by 7 are: ";
    for(int i = a; i <= b; i++){
        if(i % 7 == 0){
            cout << i << " ";
        }
    }
    return 0;
}