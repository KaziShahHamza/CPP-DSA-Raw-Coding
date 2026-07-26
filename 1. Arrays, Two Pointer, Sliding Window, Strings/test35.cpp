// reverse even values in array
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int c = 0, idx = 0;

    for (int i = 0; i < size1; i++) {
        if (arr1[i] % 2 == 0) c++;
    }

    int arr2[c] = {}, size2 = c;

    for (int i = 0; i < size1; i++) {
        if (arr1[i] % 2 == 0) {
            arr2[idx] = arr1[i];
            idx++;
        }
    }

    int l = 0, r = size2 - 1, tmp = 0;

    while (l < r) {
        tmp = arr2[l];
        arr2[l] = arr2[r];
        arr2[r] = tmp;
        l++;
        r--;
    }

    int k = 0;
    for (int i = 0; i < size1; i++) {
        if (arr1[i] % 2 == 0) {
            arr1[i] = arr2[k];
            k++;
        }
        
    }

    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << ' ';
    }

    cout << endl;    
    cout << endl;
    return 0;
}