// PROBLEM: Print all the numbers from 1 to 100 whose sum is odd.
#include<iostream>
using namespace std;
bool checkSum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return !(sum % 2 == 0);
}
int main(){
    for(int i = 1; i <= 100; i++){
        if(checkSum(i)) cout << i << " ";
    }
    return 0;
}