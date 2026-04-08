// PROBLEM: Print all the palindromes between 1 and 500 both inclusive.
#include<iostream>
using namespace std;
int main(){
    cout<<"The palindromes between 1 and 500 are: "<<endl;
    for(int i=1;i<=500;i++){
        int num = i;
        int rev = 0;
        while(num>0){
            rev = rev*10 + num%10;
            num /= 10;
        }
        if(rev == i){
            cout<<i<<" ";
        }
    }
    return 0;
}