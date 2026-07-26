#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 0, 7, 100, 99, 75, -100, -99, 23, -10, 45, 3, 0, 12, -5, 99, 1, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int num = 100, idx = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num || arr[i] == -100) {
            continue;
        }
        cout << arr[i] << ' ';
        
    }
    // for (int i = 0; i < size; i++) {
    //     // cout << arr[i] << ' ';
    //     if(arr[i] == num) {
    //         idx = i;
    //         break;
    //     }
    // }
    
    // for (int i = idx; i < size; i++) {
    //     // cout << arr[i] << ' ';
    //     // if (i == idx) continue;
    //     arr[i] = arr[i+1];
    // }
    // size--;

    // arr[idx] = num;

    // for (int i = 0; i < size; i++) {
    //     // cout << arr[i] << ' ';
    //     arr[i] = arr[i+1];
    // }

    // int size1 = sizeof(arr);
    // int size2 = sizeof(arr[0]);
    // cout << size1 << " " << size2 << endl;

    // for (int i = 0; i < size-1; i++) {
    //     arr[i] = arr[i+1];
    // }
    
    // cout << "Size: " << size << endl;
    // size--;
    // cout << "Size: " << size << endl;
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }

    cout << endl;
    return 0;
}