// PROBLEM: Find the sum of all elements at odd indices.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, sum = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(i%2 != 0) sum += arr[i];
    }
    cout << "The sum of all elements at odd indices is: " << sum << endl;
    return 0;
}
/*
The sum of all elements at odd indices is: 20
*/