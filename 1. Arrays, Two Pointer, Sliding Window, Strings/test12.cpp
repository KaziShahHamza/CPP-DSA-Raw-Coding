#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 0, 7, 100, 99, 75, -100, -99, 23, -10, 45, 3, 0, 12, -5, 99, 1, 8, 8};

    int size = sizeof(arr) / sizeof(arr[0]);

    // int tmp = arr[0];
    // for (int i = 0; i < size-1 ; i++) {
    //     arr[i] = arr[i+1];
    //     cout << arr[i] << ' ';
    // }

    // // cout << endl << tmp << endl << endl;
    // arr[size-1] = tmp;
    // cout << arr[size-1];

    // int k = 5 % size;
    // for (int i = 0; i < k; i++) {
        
    //     int tmp = arr[size-1];
    //     for (int i = size-1; i > 0; i--) {
    //         arr[i] = arr[i-1];        
    //     }
        
    //     arr[0] = tmp;
        
    // }
    
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << ' ';
    // }

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = arr[i] - 2*arr[i];
        }
        cout << arr[i] << ' ';
    }

    cout << endl;
    return 0;
}