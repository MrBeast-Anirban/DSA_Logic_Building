// PROBLEM: The number of even elements at even indices is: 3
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3}, arr2[] = {4, 5};
    int n1 = sizeof(arr)/sizeof(int), n2 = sizeof(arr2)/sizeof(int);
    int merged[n1+n2];
    for(int i = 0; i < n1; i++){
        merged[i] = arr[i];
    }
    for(int i = 0; i < n2; i++){
        merged[n1 + i] = arr2[i]; 
    }
    cout << "The merged array: ";
    for(int i = 0; i < n1+n2; i++){
        cout << merged[i] << " ";
    }
    return 0;
}
/*
The merged array: 1 2 3 4 5
*/