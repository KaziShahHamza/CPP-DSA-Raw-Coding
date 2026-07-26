#include <iostream>
#include <iterator>
#include <climits>
using namespace std;

// void hello() {
//     cout << "Hello Hamza" << endl;
// }

// float area(float a, float b) {
//     return a * b;
// }



int main() {
    // // hello();
    // float length, width;

    // cout << "Enter length and width: ";
    // cin >> length >> width;

    // float result = area(length, width);
    // cout << "Area: " << result << endl;

    int arr[] = {12, 5, 0, 7, 100, 99, 75, -100, -99, 23, -10, 45, 3, 0,
                12, -5, 99, 1, 8, 8, 15, -20, 50, 2,
                2, 2, 31, 18, -1, 75, 0, 4, 4, 60,
                -30, 11, 22, 22, 9, 100, -15, 5, 14, 14, 22};

    int size = sizeof(arr) / sizeof(arr[0]);
    
    // // int num = 5, index;
    int lar = INT_MIN, lar2 = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > lar) {
            lar2 = lar;
            lar = arr[i];
        } else if (arr[i] > lar2 && arr[i] < lar) {
            lar2 = arr[i];
        }
    }

    int sm = INT_MAX, sm2 = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < sm) {
            sm2 = sm;
            sm = arr[i];
        } else if (arr[i] < sm2 && arr[i] > sm) {
            sm2 = arr[i];
        }
    }

    cout << "Largest: " << lar << endl;
    cout << "2nd Largest: " << lar2 << endl;
    cout << "Smallest: " << sm << endl;
    cout << "2nd Smallest: " << sm2 << endl;
    // cout << "count: " << size << endl;
    // cout << "index: " << index << endl;

    return 0;
}
