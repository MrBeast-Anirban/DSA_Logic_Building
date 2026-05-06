// PROBLEM: Print all numbers between 1 and N that are divisible by both 3 and 5.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The numbers between 1 and N divisible by both 3 and 5 are: ";
    for(int i = 1; i <= n; i++){
        if(i%3==0 && i%5==0){
            cout << i << endl;
        }
    }
    return 0;
}
/*
The numbers between 1 and N divisible by both 3 and 5 are: 15
30
45
60
75
90
*/