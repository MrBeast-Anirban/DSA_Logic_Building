// PROBLEM: Print all Armstrong numbers between 1 and 1000.
#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int temp, power = 0, digit = 0, sum = 0;
    temp = n;
    while(temp != 0){
        power++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0){
        digit = temp%10;
        sum += pow(digit, power);
        temp /= 10;
    }
    if(sum == n) return true;
    else return false;
}
int main(){
    cout << "Following are the armstrong numbers between 1 and 1000: ";
    for(int i = 1; i <= 1000; i++){
        if(isArmstrong(i)){
            cout << i << endl;
        }
    }
    return 0;
}
/*
Following are the armstrong numbers between 1 and 1000: 1
2
3
4
5
6
7
8
9
153
370
371
407
*/
