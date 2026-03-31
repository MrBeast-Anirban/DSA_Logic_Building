// PROBLEM: Take marks (0–100) and print the corresponding grade (A/B/C/D/F).
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter the marks (0-100): ";
    cin >> marks;
    if(marks >= 80) cout << "Grade: A";
    else if(marks >= 60) cout << "Grade: B";
    else if(marks >= 40) cout << "Grade: C";
    else cout << "Grade: F";
    return 0;
}