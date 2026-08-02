#include <iostream>
using namespace std;

int main() {
    // int arr[] = {2, 3, 5, 6, 8, -9, 0, -4, 11};
    int arr[] = {12, 5, 0, 7, 100, 99, 75, -100, -99, 23, -10, 45, 3, 0, 12, -5, 99, 1, 8, 8};
    // int arr2[10] = {};

    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 0;

    for (int i = 0; i < size; i++) {
        // if (arr[i]%2 != 0) {
        //     // arr[count] = arr[i];
        //     n = i;
        // }
        if (arr[i]%2 == 0) {
            int tmp = arr[n];
            arr[n] = arr[i];
            arr[i] = tmp;
            n++;
        }
    }
    
    // for (int i = 0; i < size; i++) {
    //     cout << arr2[i] << ' ';
    // }

    // cout << endl;

    // for (int i = 0; i < size; i++) {
    //     if (arr[i]%2 != 0) {
    //         arr2[count] = arr[i];
    //         count++;
    //     }
    // }
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    
    cout << endl;
    return 0;
}