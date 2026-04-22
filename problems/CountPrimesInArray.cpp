
#include<iostream>
using namespace std;
int isPrime(int num){
    if(num <= 1) return 0;  // 0 and 1 are not prime numbers
    for(int i = 2; i <= num/2; i++){
        if(num%i == 0) return 0;  // If num is divisible by any number between 2 and num/2, it's not prime
    }
    return 1;  // If num is not divisible by any number between 2 and num/2, it's prime
}
int main(){
    int n, count = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size of array" << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        isPrime(arr[i])? count++ : count;
    }
    cout << "The number of prime numbers in the array is: " << count << endl;
    return 0;
}