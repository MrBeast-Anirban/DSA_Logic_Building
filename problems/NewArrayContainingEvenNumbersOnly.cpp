// PROBLEM: Create a new array containing only even elements.
#include<iostream>
using namespace std;
int main(){
    vector<int> arr;
    int number;
    cout << "Enter the elements of the array (enter -1 to stop): ";
    while(number != -1){
        cin >> number;
        if(number%2 == 0) arr.push_back(number); // If the number is even, add it to the new array
    }
    if(arr.size() == 0){
        cout << "No Even elements entered by the user." << endl;
        return 0;
    }
    cout << "The new array containing only the even elements is: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}