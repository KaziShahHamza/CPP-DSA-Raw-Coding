// Topic Name: 

#include <iostream>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    int arr[] = {1, 5, 3, 7, 4, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int freq[size] = {};

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // for (int i = 0; i < 10; i++) {
    //     cout << i << " apreas: " << freq[i] << " times." << endl;
    // }

    for (int i = 0; i < size; i++) {
        if (freq[i] > 1) {
            cout << "duplicate. " << endl;
            return 0;
        };
    }
    cout << "no dups." << endl;
        
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}