// PROBLEM: Find nCr (Combination formula) recursively using Pascal’s relation.
#include<iostream>
using namespace std;
int nCr(int n, int r){
    if(r == 0 || r == n) return 1; // Base case: nCr(n, 0) = 1 and nCr(n, n) = 1
    return nCr(n-1, r-1) + nCr(n-1, r); // Recursive case: nCr(n, r) = nCr(n-1, r-1) + nCr(n-1, r)
}
int main(){
    int n, r;
    cout << "Enter n and r: ";      
    cin >> n >> r;
    cout << "nCr(" << n << ", " << r << ") is: " << nCr(n, r) << endl;
    return 0;
}   