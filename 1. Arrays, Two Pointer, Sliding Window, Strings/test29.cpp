#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 10, 10, 15, 20, 25, 30};
    int arr2[] = {5, 8, 10, 10, 15, 30, 30};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
        
            int value = arr1[i];
        
            while (i < n && arr1[i] == value) i++;
            while (j < m && arr2[j] == value) j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << endl;
    return 0;
}