// PROBLEM: Reverse an array in-place.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 0, j = sizeof(arr)/sizeof(int)-1; i < j; i++, j--){
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }
    cout << "The reversed array is: ";
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}
/*
The reversed array is: 9, 8, 7, 6, 5, 4, 3, 2, 1,
*/