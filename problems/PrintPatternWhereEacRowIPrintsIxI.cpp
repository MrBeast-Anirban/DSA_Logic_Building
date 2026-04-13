// PROBLEM: Print a pattern where each row i prints i*i.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << i*i << endl;
    }
    return 0;
}