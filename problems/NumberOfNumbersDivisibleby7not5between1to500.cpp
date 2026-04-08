// PROBLEM: Print the count of the numbers between 1 and 500 that are divisible by 7 but not by 5.
#include<iostream>
using namespace std;
int main(){
    int count = 0;
    for(int i = 1; i <= 500; i++){
        if(i%7==0 && i%5!=0) count++;
    }
    cout << count << endl;
    return 0;
}

/*
The above solution is O(n)
Below Optimized solution: O(1)
#include<iostream>
using namespaces std;
int main(){
    int count = 0;
    count = 500/7 - 500/35; // count of numbers divisible by 7 - count of numbers divisible by 35 (divisible by both 7 and 5)
    cout << count << endl;
    return 0;    
}
*/