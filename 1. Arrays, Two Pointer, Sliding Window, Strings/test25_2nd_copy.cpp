#include <iostream>
using namespace std;

int main() {
    // int arr[] = {12, 5, 0, 7, 100, 99, 75, -100, -99, 23, -10, 45, 3, 0, 12, -5, 99, 1, 8, 8};

    int arr[] = {10, 10, 20, 20, 20, 30, 30, 40, 50, 50, 50, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        bool dup = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                dup = true;
            }
        }
        if (!dup) {
            cout << arr[i] << " ";
        }
    }
    
    
    cout << endl;
    return 0;
}