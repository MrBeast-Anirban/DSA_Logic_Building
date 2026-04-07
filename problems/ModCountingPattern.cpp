// PROBLEM: Print Increasing Numbers per Row (Same Number Repeated) starting from k and (0<=k<=9).
#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << k++%10 << " ";
        }
        cout << endl;
    }
}