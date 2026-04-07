// PROBLEM: Print Repeated Numbers per Row (Same Number Repeated)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows to print: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}