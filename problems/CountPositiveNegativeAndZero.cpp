// PROBLEM: Count how many positive, negative, and zero elements are in an array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {-4,-3, -2, -1, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(arr[i] < 0){
            negativeCount++;
        }
        if(arr[i] > 0){
            positiveCount++;
        }
        if(arr[i] == 0){
            zeroCount++;
        }
    }
    cout << "Total Number of Positive elements are " << positiveCount << ", count of Negative elements are " << negativeCount << ", and count of zeros are " << zeroCount << "." << endl;
    return 0;
}
/*
Total Number of Positive elements are 9, count of Negative elements are 4, and count of zeros are 3.
*/