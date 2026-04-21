// PROBLEM: Take n elements and print only those greater than a given value k.
#include<iostream>
using namespace std;
int main(){
    int n, k;
    cout << "Enter the number of terms in the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid input. The number of terms must be greater than 0." << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Elements greater than " << k << ": ";
    for(int i = 0; i < n; i++){
        if(arr[i] > k){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}