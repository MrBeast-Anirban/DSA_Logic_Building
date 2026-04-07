// PROBLEM: Print Stars in Even Numbers (2, 4, 6, 8, 10)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows to print: ";
    cin >> n;   
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}