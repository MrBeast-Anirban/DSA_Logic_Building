// PROBLEM: Find the sum of all factors of a number.
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    cout << "Sum of all factors of " << n << " is: " << sum << endl;
    return 0;
}