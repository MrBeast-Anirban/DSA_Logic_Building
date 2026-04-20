// PROBLEM: Find the average of array elements.
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    double average = double(sum)/n;
    cout << "The average of the array elements is: " << average << endl;
    return 0;
}