// PROBLEM: Input n and take n integers into an array; print them.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The integers are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}