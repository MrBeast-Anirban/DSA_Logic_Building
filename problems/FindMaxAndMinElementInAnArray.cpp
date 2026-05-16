// PROBLEM: Find the maximum and minimum element in an array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, min = INT_MAX, max = INT_MIN;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "The max element is " << max << " and min element is " << min << "." << endl;
    return 0;
}