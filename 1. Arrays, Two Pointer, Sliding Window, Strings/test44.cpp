#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, -5, 4, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        cout << sum << " ";
    }
    cout << endl; 

    int sum2 = 0;
    for (int i = size - 1; i >= 0; i--) {
        sum2 += arr[i];
        cout << sum2 << " ";
    }
    cout << endl;
    cout << endl;

    int k = 3, sum3 = 0;
    cout << "first k: ";
    for (int i = 0; i < k; i++) {
        sum3 += arr[i];
        cout << sum3 << " ";
    }
    cout << endl;
    
    int sum4 = 0;
    cout << "last k: ";
    for (int i = size-1; i >= k-1; i--) {
        sum4 += arr[i];
        cout << sum4 << " ";
    }
    cout << endl;
    
    int arr2[] = {3, 8, 2, 10, 7, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int l = 1, r = 3, sum5 = 0;
    
    cout << endl;
    cout << "l = 1, r = 3: ";
    for (int i = l; i < r; i++) {
        sum5 += arr2[i];
        cout << sum5 << ' ';
    }
    cout << endl;

    int max = arr2[0];
    for (int i = 0; i < size2; i++) {
        if (arr2[i] > max) {
            max = arr2[i];
            cout << max << ' ';
        } else {
            cout << max << ' ';
        }
    }
    cout << endl;

    int arr3[size2] = {}, idx = 0;
    int max2 = arr2[size2-1];
    for (int i = size2-1; i >= 0; i--) {
        if (arr2[i] > max2) {
            max2 = arr2[i];
            arr3[i] = max2;
            // cout << max2 << ' ';
        } else {
            arr3[i] = max2;
            // cout << max2 << ' ';
        }
    }

    for (int i = 0; i < size2; i++) {
        cout << arr3[i] << ' ';
    }
    
    cout << endl;
    return 0;
}