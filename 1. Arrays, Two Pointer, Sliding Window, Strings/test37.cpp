#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = arr[0];
    int psum = arr[0];

    for (int i = 1; i < size; i++) {
        if (sum + arr[i] > arr[i])
            sum += arr[i];
        else
            sum = arr[i];

        if (sum > psum)
            psum = sum;
    }

    cout << "Maximum Subarray Sum = " << psum << endl;

    return 0;
}