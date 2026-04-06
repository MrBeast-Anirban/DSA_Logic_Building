// PROBLEM: Print sum of first n terms of Fibonacci series.
#include<iostream>
using namespace std;
int main(){
    int n, t1 = 0, t2 = 1, nextTerm = 0, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i == 1){
            sum += t1;
            continue;
        }
        if(i == 2){
            sum += t2;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        sum += nextTerm;
    }
    cout << "Sum of first " << n << " terms of Fibonacci series is: " << sum << endl;
    return 0;
}