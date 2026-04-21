// PROBLEM: Count how many elements are even and odd.
#include<iostream>
using namespace std;
int main(){
    int n, evenCount = 0, oddCount = 0;
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
        if(arr[i] % 2 == 0){
            evenCount++;
        } 
        else {
            oddCount++;
        }
    }
    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;
    return 0;
}