#include <iostream>
using namespace std;

int main() {
    // int arr1[] = {10, 10, 0, 10, 10, 20, 20, 50, 20, 30, 10, 10, 30, 40, 60, 60, 60, 70};
    // int arr1[] = {1, 5, 6, 1, 1, 0, 2, 4, 2, 3, 0, 0, 3, 6, 6, 3};
    // int arr1[] = {1, 5, 6, 0, 1, 2, 2, 4, 2, 1};

    int arr1[] = {0, 2, 3, 3, 2, 2, 5, 7, 8, 9, 2, 5, 3, 5, 6};
    int arr2[] = {1, 2, 3, 4, 4, 4, 2, 3, 3, 2, 5, 5, 5, 6, 0, 9};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[size1] = {}, idx = 0;
    // bool zero = false;

    for (int i = 0; i < size1; i++) {
        bool dup = false;
        // if (num == arr1[i]) continue;
        // if (arr1[i] == 0) zero = true;
        // num = arr1[i];
        for (int j = 0; j < idx; j++) {
            if (arr1[i] == arr3[j]) {
                dup = true;
                break;
            }
        }        
        if (dup) continue;
        arr3[idx] = arr1[i];
        idx++;
        // cout << arr1[i] << " ";
    }

    // if (zero) idx++;
    // cout << "idx: " << idx << endl;
    
    // for (int i = 0; i < idx; i++) {
    //     // if (arr3[i] != 0) {
    //         cout << arr3[i] << ' ';
    //     // }
    // }

    // cout << endl;
    // cout << endl;

    for (int i = 0; i < idx; i++) {
        int dup = 0;
        for (int j = 0; j < size2; j++) {
            if (arr3[i] == arr2[j] && dup == 0) {
                cout << arr3[i] << " ";
                dup = 1;
            }
        }
    }
    // int num2 = -1;
    // for (int i = 0; i < 100; i++) {
    //     if (num2 == arr3[i]) continue;
    //     num2 = arr3[i];
    //     cout << arr3[i] << " ";
    // }
    cout << endl;
    return 0;
}