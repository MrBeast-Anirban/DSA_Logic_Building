// PROBLEM: Count how many numbers are divisible by 3 and 5 both.
#include<iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 1){
        cout << "Invalid size of the array" << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] %3 == 0 && arr[i]%5 == 0) count++;
    }
    cout << "The number of elements divisible by both 3 and 5 is: " << count << endl;
    return 0;
}