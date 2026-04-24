// PROBLEM: Print all unique elements (those that occur exactly once).
#include<iostream>
#include<vector>
#include<unordered_map>
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

    unordered_map<int, int> frequency;
    for(int i = 0; i < n; i++){
        frequency[arr[i]]++;
    }

    cout << "Unique elements (occurring exactly once):" << endl;
    for(const auto& pair : frequency){
        if(pair.second == 1){
            cout << pair.first << " ";
        }
    }
    cout << endl;

    return 0;
}