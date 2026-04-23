// PROBLEM: Count how many elements are common between two arrays.
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
    int count = 0;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                count++;
                break;
            }
        }   
    }
    cout << "Number of common elements: " << count << endl;
    return 0;
}