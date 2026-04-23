// PROBLEM: Print all elements that appear more than once.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size error." << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Elements that appear more than once: ";
    for(int i = 0; i < n; i++){
        bool found = false;
        for(int j = 0; j < n; j++){
            if(i != j && arr[i] == arr[j]){
                found = true;
                break;
            }
        }
        if(found){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}