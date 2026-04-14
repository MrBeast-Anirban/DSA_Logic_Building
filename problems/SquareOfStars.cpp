// PROBLEM: Print a square of stars recursively (n×n).
#include<iostream>
using namespace std;
void makesquare(int n, int m){
    if(n == 0) return; // Base case: when n is 0, stop recursion
    for(int i = 0; i < m; i++){
        cout << "* ";
    }
    cout << endl;
    makesquare(n-1, m); // Recursive call with reduced n
}
int main(){
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    makesquare(n, n);
    return 0;
}