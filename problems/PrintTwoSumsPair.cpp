// PROBLEM: Print all pairs in an array whose sum equals a given number.
#include<iostream>
using namespace std;
int main(){
    int add[] = {2, 4, 3, 5, 6, 8, 7, 9}, target = 10;
    int n = sizeof(add)/sizeof(int);
    vector<pair<int, int>> pairs;
    cout << "Pairs in the array whose sum equals to " << target << " are: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(add[i] + add[j] == target){
                pairs.push_back({add[i], add[j]});
            }
        }
    }
    for(const auto &p : pairs){
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
    return 0;
}