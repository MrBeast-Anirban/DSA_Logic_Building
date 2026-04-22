// PROBLEM: Copy one array to another manually.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size error." << endl;
        return 0;
    }
    int arr1[n], arr2[n];
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++){
        arr2[i] = arr1[i];
    }
    cout << "The copied array is: ";
    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}