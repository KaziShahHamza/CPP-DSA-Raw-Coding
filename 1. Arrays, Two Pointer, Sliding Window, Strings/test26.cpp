#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 5, 8, 10};
    int arr2[] = {2, 8, 9, 11, 2, 12, 4};


    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int count = 0, idx = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                count++;
            }
        }
    }

    int size3 = size2 - count;
    cout << "size3: " << size3 << endl;
    int arr3[size3] = {};

    for (int i = 0; i < size3; i++) {
        cout << arr3[i] << ' ';
    }

    cout << endl;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) continue;
            else arr3[i] = arr2[j];
        }
    }

    for (int i = 0; i < size3; i++) {
        cout << arr3[i] << ' ';
    }
    
    cout << endl;
    return 0;
}