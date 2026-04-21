// PROBLEM: Find the first occurrence of a given number.
#include<iostream>
using namespace std;
int main(){
    int ele, n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the element to find: ";
    cin >> ele;
    for(int i = 0; i < n; i++){
        if(arr[i] == ele){
            cout << "The first occurance of " << ele << " is at index " << i << endl;
            break;
        }
    }
    return 0;
}