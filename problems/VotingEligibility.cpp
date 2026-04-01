// PROBLEM: Check voting eligibility for a given age (18+).
#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter the age: ";
    cin >> age;
    if(age >= 18) cout << "Eligible for voting";
    else cout << "Not eligible for voting";
    return 0;
}