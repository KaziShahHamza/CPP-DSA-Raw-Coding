#include <iostream>
using namespace std;

int main() {
    // int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    // int arr[] = {1, 2, 3, 4, 5};
    // int arr[] = {-1, -2, -3, -4, -5};
    // int arr[] = {2, -1, 2, 3, -9, 4, 5};
    // int arr[] = {-2, 3, -1, 4, -2, 1};
    int arr[] = {5, -2, -3, 4, -1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0, psum = 0, max = -10000000, min = 1000000;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        if (sum < min) min = sum;
        if (sum > max) max = sum;
        if (sum < 0) sum = min;
    }

    cout << endl;
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
    
    cout << endl;

    cout << endl;
    return 0;
}