// PROBLEM: Count how many pairs of elements have a sum equal to a given number k.
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int n, k;
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
    
    cout << "Enter the value of k: ";
    cin >> k;
    
    unordered_set<int> s;
    int count = 0;
    
    for(int i = 0; i < n; i++){
        int complement = k - arr[i];
        if(s.find(complement) != s.end()){
            count++;
        }
        s.insert(arr[i]);
    }
    
    cout << "The number of pairs with sum equal to " << k << " is: " << count << endl;
    
    return 0;
}