#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 4, 5, 8, 9, 4, 4, 10};
    int arr2[] = {2, 4, 6, 8, 5, 5, 10, 10, 10};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int c = 0, idx = 0;
    for (int i = 0; i < size1; i++) {
        // cout << arr[i] << ' ';
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) c++;
        }
    }

    int size3 = c;
    int arr3[size3] = {};

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[idx] = arr1[i];
                idx++;
            } 
        }
    }


    for (int i = 0; i < size3; i++) {
        for (int j = i+1; j < size3; j++) {
            if (arr3[i] == arr3[j]) arr3[j] = -1;
        }
    }


    int c2 = 0, idx2 = 0;
    for (int i = 0; i < size3; i++) {
        // cout << arr[i] << ' ';
        if (arr3[i] == -1) c2++; 
    }

    int size4 = size3 - c2;
    int arr4[size4] = {};

    for (int i = 0; i < size3; i++) {
        if (arr3[i] != -1) {
            arr4[idx2] = arr3[i];
            idx2++;
        }
    }

    for (int i = 0; i < size4; i++) {
        cout << arr4[i] << ' ';
    }

    // for (int i = 0; i < size3; i++) {
    //     cout << arr3[i] << ' ';
    // }

    // cout << c << endl;
    cout << endl;
    return 0;
}