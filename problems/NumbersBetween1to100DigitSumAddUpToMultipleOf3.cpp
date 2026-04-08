// PROBLEM: Print numbers between 1–100 whose digits add up to a multiple of 3.
#include<iostream>
using namespace std;
int main(){
    cout<<"The numbers between 1 and 100 whose digits add up to a multiple of 3 are: "<<endl;
    for(int i=1;i<=100;i++){
        int num = i;
        int sum = 0;
        while(num>0){
            sum += num%10;
            num /= 10;
        }
        if(sum%3 == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}