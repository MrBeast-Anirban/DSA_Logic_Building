// PROBLEM: Print characters that appear more than once (without map).
#include<iostream>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    vector<int> frequency(127); // vector of size 127
    cout << "The characters with frequency greater than 1 is: " << endl;
    for(int i = 0; i < s.length(); i++){
        int val = s[i];
        frequency[val]++;
    }
    for(int i = 0; i < frequency.size(); i++){
        if(frequency[i] > 1){
            cout << char(i) << " ";
        }
    }
    return 0;
}
/*
Enter a string: It doesnot matter who I am underneath, but what I do that defines me!!!
The characters with frequency greater than 1 is: 
  ! I a d e h m n o r s t u w
*/