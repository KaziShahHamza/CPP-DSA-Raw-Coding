#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 20, 50, 40, 30, 40, 30, 20, 50, 10};

    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) arr[j] = -1;
        }
    }

    int c = 0, idx = 0;
    for (int i = 0; i < size; i++) {
        // cout << arr[i] << ' ';
        if (arr[i] == -1) c++; 
    }

    int size2 = size - c;
    int arr2[size2] = {};

    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            arr2[idx] = arr[i];
            idx++;
        }
    }

    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << ' ';
    }


    
    cout << endl;
    return 0;
}