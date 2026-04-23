// PROBLEM: Merge two arrays into a third array.
#include<iostream>
using namespace std;
int main(){
    int arr1[100],arr2[100],arr3[300];
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
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    // Merge the two arrays into the third array
    for(int i = 0; i < n1; i++){
        arr3[i] = arr1[i];
    }
    for(int i = 0; i < n2; i++){
        arr3[n1 + i] = arr2[i];
    }
    cout << "The merged array is: ";
    for(int i = 0; i < n1 + n2; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}