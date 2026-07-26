#include <iostream>
using namespace std;

int main() {
    // int arr1[] = {1, 2, 3, 4, 9};
    // int arr2[] = {4, 5, 2, 3, 4, 8};
    // int arr1[] = {10, 10, 10, 10, 10, 20, 20, 20, 30, 10, 10, 30, 40};
    // int arr2[] = {10, 10, 30, 40, 50, 30, 50, 10, 10, 50, 50};

    int arr1[] = {0, 2, 3, 3, 2, 2, 5, 7, 8, 9, 2, 5, 3, 5, 6};
    int arr2[] = {1, 2, 13};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int size3;
    if (size1 > size2) {
        int size3 = size2;
    } else {
        int size3 = size1;
    }
    int arr3[size3] = {};
    
    // int count = 0;
    

    // for (int i = 0; i < size1; i++) {
    //     // cout << arr[i] << ' ';
    //     for (int j = 0; j < size1; j++) {
    //         if (arr1[i] == arr1[j]) continue;
    //         else {
    //             arr3[i] = arr1[j];
    //         }
    //     }
    // }

    // for (int i = 0; i < size3; i++) {
    //     cout << arr3[i] << ' ';
    // }

    cout << endl;
    cout << endl;

    for (int i = 0; i < size1; i++) {
        int dup = 0;
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j] && dup == 0) {
                cout << arr1[i] << " ";
                dup = 1;
            }
        }
    }
    cout << endl;
    
    
    // for (int i = 0; i < size1; i++) {
    //     arr3[i] = arr1[i];
    //     count++;
    // }

    // for (int i = 0; i < size3; i++) {
    //     // arr3[i] = arr1[i];
    //     cout << arr3[i] << " ";
    // }
    
    // cout << endl;

    // for (int i = 0; i < size2; i++) {
    //     arr3[count] = arr2[i];
    //     count++;
    // }

    // for (int i = 0; i < size3; i++) {
    //     // arr3[i] = arr1[i];
    //     cout << arr3[i] << " ";
    // }
    
    cout << endl;
    return 0;
}