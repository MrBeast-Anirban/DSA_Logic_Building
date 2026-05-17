// PROBLEM: Count how many elements are even at an even index.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0, 1, 2, 3, 4, 6, 7, 8, 10}, count = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(arr[i] % 2 == 0 && i % 2 == 0 && i != 0){
            count++;
        }
    } 
    cout << "The number of even elements at even indices is: " << count << endl;
    return 0;
}
/*
The number of even elements at even indices is: 3
*/