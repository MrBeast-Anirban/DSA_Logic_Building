// PROBLEM: Print the alphabet incrementing in a left aligned pyramid pattern.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}