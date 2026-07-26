#include <iostream>
using namespace std;

int main() {
    int arr1[] = {2, 7, 3, 4, 3, 3, 3, 6, 7, 9, 11};
    int arr2[] = {2, 4, 6, 3, 3, 4, 3, 3, 6, 10};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int idx = 0;

    int arr3[size1] = {};

    for (int i = 0; i < size1; i++) {
        bool pr = false;
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                pr = true;
                break;
            }
        }

        if (pr) {
            arr3[idx] = arr1[i];
            idx++;
        } 
    }

    for (int i = 0; i < idx; i++) {
        for (int j = i+1; j < idx; j++) {
            if (arr3[i] == arr3[j]) arr3[j] = -1;
        }
    }
    
    int c2 = 0, idx2 = 0;
    for (int i = 0; i < idx; i++) {
        if (arr3[i] == -1) c2++; 
    }

    int size4 = idx - c2;
    int arr4[size4] = {};

    for (int i = 0; i < idx; i++) {
        if (arr3[i] != -1) {
            arr4[idx2] = arr3[i];
            idx2++;
        }
    }

    for (int i = 0; i < size4; i++) {
        cout << arr4[i] << ' ';
    }
    
    cout << endl;
    return 0;
}