// PROBLEM: Print Stars and Spaces Alternating (Stars and Blank Spaces replacing black space with 'b' character)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows to print: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << "b";
        }
        for(int j = 0; j <= 2*i+1; j++){
            if(j%2 == 0){
                cout << "b";
            }
            else cout << "*";
        }
        cout << endl;
    }
    return 0;
}