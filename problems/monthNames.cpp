// PROBLEMS: Take a month number (1–12) and print the number of days in that month (ignore leap years).
#include<iostream> 
using namespace std;
int main(){
    int month;
    cout << "Enter a month number (1-12): ";
    cin >> month;
    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days"; break;
        case 4: case 6: case 9: case 11:
            cout << "30 days"; break;
        case 2:
            cout << "28 days"; break;
        default:
            cout << "Invalid input";
    }
    return 0;
}