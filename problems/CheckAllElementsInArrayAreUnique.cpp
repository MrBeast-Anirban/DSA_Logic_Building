// PROBLEM: Check if all elements in an array are unique.
#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;

    unordered_set<int> s;

    for(int i = 0; i < n; i++){
        if(s.find(arr[i]) != s.end()){
            cout << "Elements are not unique\n";
            return 0;
        }
        s.insert(arr[i]);
    }

    cout << "All elements are unique\n";
}