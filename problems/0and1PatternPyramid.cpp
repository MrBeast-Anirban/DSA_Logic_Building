// PROBLEM: Print 0 and 1 in a left aligned pyramid pattern.
#include<iostream>
using namespace std;
int main(){
    int n, flip = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << flip << " ";
            flip = 1 - flip; // Flip between 0 and 1
        }
        cout << endl;
    }
}