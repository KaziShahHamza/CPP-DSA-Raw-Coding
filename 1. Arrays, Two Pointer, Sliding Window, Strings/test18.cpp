#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 0, 7, 100, 99, 75, -50, -29, 23, -10, 45, 3, 0, 12, -5, 99, 1, 8, 8};
    int prefix[] = {};

    int size = sizeof(arr) / sizeof(arr[0]);
    int size2 = sizeof(prefix) / sizeof(prefix[0]);
    cout << endl << "Size2: " << size2 << endl;
    
    int n = 6, sum = 0, l = 1, r = 3;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        prefix[i] = sum;
        cout << "Sum: " << sum << endl;
    }

    cout << endl;
    cout << "Total: " << sum ;
    int rangeSum = prefix[r] - prefix[l-1];
    cout << endl << "RangeSum: " << rangeSum << endl;
    
    size2 = sizeof(prefix) / sizeof(prefix[0]);
    cout << endl << "Size2: " << size2 << endl;
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << prefix[i] << ' ';
    }
    
    cout << endl;
    return 0;
}