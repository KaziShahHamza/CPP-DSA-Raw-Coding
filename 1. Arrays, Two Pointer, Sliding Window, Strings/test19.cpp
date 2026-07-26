#include <iostream>
using namespace std;

int main() {
    // int arr[] = {12, 5, 0, 7, 0, 99, 75, 0, -99, 23, -10, 45, 3, 0, 12, -5, 99, 1, 8, 8};
    // int arr[] = {0, 2, 0, 7, 0, 9, 0, 3};
    int arr2[100] = {};
    int arr[] = {1, 2, 0, 3, 0, 5, 0};
    // int arr[] = {1, 2, 3, 5, 4, 0, 0, 2, 0};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[n] = arr[i];
            n++;
        }
    }

    while (n < size) {
        arr[n] = 0;
        n++;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    
    cout << endl;
    return 0;
}