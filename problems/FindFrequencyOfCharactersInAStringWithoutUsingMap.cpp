// PROBLEM: Find the frequency of each character in a string (without using a map).
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int frequency[256] = {0}; // Assuming ASCII character set, we can use an array of size 256 to store frequency of each character.
    for(int i = 0; i < s.length(); i++){
        frequency[int(s[i])]++; // Increment the frequency of the character at index corresponding to its ASCII value.
    }
    cout << "Frequency of each character is the string is as follows: " << endl;
    for(int i = 0; i < 256; i++){
        if(frequency[i] > 0){ // Print only characters that appear in the string (frequency > 0).
            cout << "Character: '" << char(i) << "', Frequency: " << frequency[i] << endl; // Convert index back to character for display.
        }
    }
    return 0;
}
/*
Enter a string: You think Darkness is your ally, But you mearly adopted the dark. I was born in it, molded by it. I didn't see the light until I was already a man. By then, It was nothing to me but blinding. The shadows betray you because they belong to me.
Frequency of each character is the string is as follows: 
Character: ' ', Frequency: 48
Character: ''', Frequency: 1
Character: ',', Frequency: 3
Character: '.', Frequency: 5
Character: 'B', Frequency: 2
Character: 'D', Frequency: 1
Character: 'I', Frequency: 4
Character: 'T', Frequency: 1
Character: 'Y', Frequency: 1
Character: 'a', Frequency: 15
Character: 'b', Frequency: 7
Character: 'c', Frequency: 1
Character: 'd', Frequency: 10
Character: 'e', Frequency: 18
Character: 'g', Frequency: 4
Character: 'h', Frequency: 9
Character: 'i', Frequency: 11
Character: 'k', Frequency: 3
Character: 'l', Frequency: 9
Character: 'm', Frequency: 5
Character: 'n', Frequency: 13
Character: 'o', Frequency: 12
Character: 'p', Frequency: 1
Character: 'r', Frequency: 7
Character: 's', Frequency: 10
Character: 't', Frequency: 18
Character: 'u', Frequency: 8
Character: 'w', Frequency: 4
Character: 'y', Frequency: 10
*/