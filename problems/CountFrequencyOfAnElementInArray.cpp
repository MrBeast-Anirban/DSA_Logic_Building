// PROBLEM: Count how many times a given element appears.
#include<iostream>
using namespace std;    
int main(){ 
    int n, element, count = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to count: ";
    cin >> element;

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    cout << "The element " << element << " appears " << count << " times in the array." << endl;

    return 0;
}