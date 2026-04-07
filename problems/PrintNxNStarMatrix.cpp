// PROBLEM: Print NxN star matrix. For example, if the number is 3 then print
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of stars to print: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}