// PROBLEM: Take the hour of the day (0–23) and print “Good Morning”,“Good Afternoon”,“Good Evening”, or “Good Night”.
#include<iostream>
using namespace std;
int main(){
    int hour;
    cout << "Enter the hour (0-23): ";
    cin >> hour;
    if(hour >= 6 && hour < 12) cout << "Good Morning";
    else if(hour >= 12 && hour < 17) cout << "Good Afternoon";
    else if(hour >= 17 && hour < 21) cout << "Good Evening";
    else cout << "Good Night";
    return 0;
}