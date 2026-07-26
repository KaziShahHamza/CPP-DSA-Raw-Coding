#include <iostream>
using namespace std;

int main() {
    int arr[] = {-20, -10, -5, 0, 1, 2, 5, 8, 10, 15, 20, 25, 30};

    int size = sizeof(arr) / sizeof(arr[0]);

    int num = 6, idx = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > num) {
            idx = i;
            break;
        }
        // cout << arr[i] << ' ';
    }
    cout << "index: " << idx << endl;

    // size++;

    for (int i = size; i > idx; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[idx] = num;
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    // cout << arr[i] << ' ';


    cout << endl;
    return 0;
}