// PROBLEM: Find element-wise sum of two arrays (A[i] + B[i]).
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    if(n1 <= 0){
        cout << "Invalid size error." << endl;
        return 0;
    }
    cout << "Enter the size of the second array: ";
    cin >> n2;
    if(n2 <= 0){
        cout << "Invalid size error." << endl;
        return 0;
    }
    int arr1[n1], arr2[n2];
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    if(n1 != n2){
        cout << "Error: Arrays must be of the same size to find element-wise sum." << endl;
        return 0;
    }
    int sumArray[n1];
    for(int i = 0; i < n1; i++){
        sumArray[i] = arr1[i] + arr2[i];
    }
    cout << "The element-wise sum of the two arrays is: ";
    for(int i = 0; i < n1; i++){
        cout << sumArray[i] << " ";
    }
    cout << endl;
    return 0;
}