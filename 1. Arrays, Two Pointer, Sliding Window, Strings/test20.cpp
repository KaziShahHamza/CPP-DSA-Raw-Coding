#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 6, 8, -9, 0, -4, 11};
    int arr2[10] = {};

    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i]%2 == 0) {
            arr2[count] = arr[i];
            count++;
        }
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << ' ';
    }

    cout << endl;

    for (int i = 0; i < size; i++) {
        if (arr[i]%2 != 0) {
            arr2[count] = arr[i];
            count++;
        }
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << ' ';
    }
    
    cout << endl;
    return 0;
}