// PROBLEM: Print all unique elements from an array.
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10};
    unordered_set<int> uniqueElements;
    cout << "The unique elements from the array are: " ;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(uniqueElements.find(arr[i]) == uniqueElements.end()){
            uniqueElements.insert(arr[i]);
            cout << arr[i] << ", ";
        }
    }
    return 0;
}
/*
The unique elements from the array are: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
*/