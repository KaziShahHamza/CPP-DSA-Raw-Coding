// Topic Name: Concatenation of Array

#include <iostream>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    int n = 4, m = 2*n, idx = 0;
    int arr[n] = {12, 5, 0, 7};
    int arr2[m] = {};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            arr2[idx] = arr[j];
            idx++;
        }
    }
    
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << ' ';
    }
    
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}