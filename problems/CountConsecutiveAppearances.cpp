// PROBLEM: Count how many times a number appears consecutively in an array.
#include<iostream>
#include<vector>
using namespace std;

int countConsecutiveAppearances(const vector<int>& arr, int target) {
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }

    return maxCount;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 3, 4, 4, 4, 4};
    int target = 4;
    cout << "The maximum consecutive appearances of " << target << " is: " << countConsecutiveAppearances(arr, target) << endl;
    return 0;
}
/*
The maximum consecutive appearances of 4 is: 4
*/
