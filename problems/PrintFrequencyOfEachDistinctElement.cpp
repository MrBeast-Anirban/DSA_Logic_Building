// PROBLEM: Print the frequency of each distinct element.
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

    cout << "Frequency of each distinct element:" << endl;
    for(const auto& pair : frequency){
        cout << "Element: " << pair.first << ", Frequency: " << pair.second << endl;
    }

    return 0;
}