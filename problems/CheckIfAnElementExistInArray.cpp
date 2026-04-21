// PROBLEM: Input an element x — check if it exists in the array.
#include<iostream>
using namespace std;
int main(){
    int n, x;
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
    cout << "Enter the element to check: ";
    cin >> x;
    bool found = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            found = true;
            break;
        }
    }
    if(found){
        cout << "Element " << x << " exists in the array." << endl;     
    }
    else{
        cout << "Element " << x << " does not exist in the array." << endl;
    }
    return 0;
}