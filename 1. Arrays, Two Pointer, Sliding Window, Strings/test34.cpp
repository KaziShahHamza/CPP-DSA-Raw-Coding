// Palindrome code
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 1, 2, 3, 2, 1, 1};

    int size = sizeof(arr1) / sizeof(arr1[0]);

    int l = 0, r = size -1;

    while (l < r) {
        if (arr1[l] != arr1[r]) {
            cout << "Not palindrome." << endl;
            return 0;
        }
        
        l++;
        r--;
    }

    cout << "Palindrome." << endl;
    cout << endl;
    return 0;
}