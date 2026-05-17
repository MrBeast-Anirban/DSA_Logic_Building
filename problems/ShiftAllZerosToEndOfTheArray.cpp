// PROBLEM: Shift all zeros to the end of the array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0, 1, 2, 0, 3, 0, 4, 5, 6, 0, 0, 9, 10, 0};
    cout << "Original array: ";
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array after shfting zeros to the end: ";
    for(int i = 0, j = sizeof(arr)/sizeof(int)-1; i < j; i++){
        if(arr[i] == 0){
            while(arr[j] == 0) j--;
            arr[i] = arr[j];
            arr[j] = 0;
        }
    }
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
/*
Original array: 0 1 2 0 3 0 4 5 6 0 0 9 10 0 
Array after shfting zeros to the end: 10 1 2 9 3 6 4 5 0 0 0 0 0 0
*/