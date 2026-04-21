// PROBLEM: Find the sum of odd elements only.
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i]%2==0 ? 0 : arr[i];  // If the element is even, add it to sum, otherwise continue to the next iteration
    }
    cout << "The sum of odd elements in the array is: " << sum << endl;
    return 0;
}