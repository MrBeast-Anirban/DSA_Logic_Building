// PROBLEM: Find elements that are in one array but not in the other.
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
    cout << "Elements in the first array but not in the second array: ";
    for(int i = 0; i < n1; i++){
        bool found = false;
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                found = true;
                break;
            }
        }
        if(!found){
            cout << arr1[i] << " ";
        }
    }
    cout << endl;
    cout << "Elements in the second array but not in the first array: ";
    for(int i = 0; i < n2; i++){
        bool found = false;
        for(int j = 0; j < n1; j++){
            if(arr2[i] == arr1[j]){
                found = true;
                break;
            }
        }
        if(!found){
            cout << arr2[i] << " ";
        }
    }
    cout << endl;
    return 0;
}