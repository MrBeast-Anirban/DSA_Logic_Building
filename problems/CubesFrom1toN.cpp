// PROBLEM: Print the cube of numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Cubes of numbers from 1 to " << n << " are: ";
    for(int i = 1; i <= n; i++){
        cout << i*i*i << " ";
    }
    return 0;
}