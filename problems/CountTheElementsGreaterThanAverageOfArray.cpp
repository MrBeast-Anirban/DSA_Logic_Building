// PROBLEM: Count how many elements are greater than the average of the array.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid size error." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    double average = (double)sum / n;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > average){
            count++;
        }
    }

    cout << "The number of elements greater than the average is: " << count << endl;

    return 0;
}