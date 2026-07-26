#include <iostream>
using namespace std;

int main() {
    int n = 0;

    // int arr[] = {12, 5, 0, 7, 100, 99, 75, 98, -100, -100, 98, -99, 23, -10, 45, 3, 0, 12, -5, 99, 1, 8, 8, 15, -20, 50, 2, -98, -98,2, 2, 31, 18, -1, 75, 0, 4, 4, 60, -30, 11, -98, 22, 22, 9, 100, 98, 100, -15, 5, 14, 14, 22};

    // int arr[] = {10, 10, 20, 30, 30, 40, 50, 40, 30, 30};
    int arr[] = {12, 5, 0, 7, 100, 99, 75, -100, -99, 23, -10, 45, 3, 0, 12, -5, 99, 1, 8, 8};

    int size = sizeof(arr) / sizeof(arr[0]);

    int l = arr[0], r = arr[size-1], tmp = 0;

    // cout << l << " " << r << endl;
    // cout << l++ << " " << r-- << endl;
    // cout << arr[l] << " " << arr[r] << endl;

    for (int i = 0, j = size - 1; i < size/2; i++, j--) {
        cout << arr[i] << " " << arr[j] << endl;
    }

    cout << "Swapped." << endl;

    for (int i = 0, j = size - 1; i < size/2; i++, j--) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        cout << arr[i] << " " << arr[j] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    // while (l < r) {
        

    //     l++;
    //     r--;
    // }

    // for (int i = 0; i < size; i++) {
    //     // if (arr[i] < 0) {
    //         arr[i] += 5;
    //     // }
    // }

    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << ' ';
    // }
    // int tmp = 0;
    // tmp = arr[0];
    // arr[0] = arr[size - 1];
    // arr[size - 1] = tmp;



    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << ' ';
    // }
    // cout << endl;
    cout << endl;

    return 0;
}