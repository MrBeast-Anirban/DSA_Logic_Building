// PROBLEM: Find the second largest element in an array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int largest = INT_MIN, secondLargest = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(arr[i] >= largest){
            secondLargest = largest;
            largest = arr[i];
        }
    }
    cout << "The second element of array is: " << secondLargest << endl;
    return 0;
}
/*
The second element of array is: 8
*/