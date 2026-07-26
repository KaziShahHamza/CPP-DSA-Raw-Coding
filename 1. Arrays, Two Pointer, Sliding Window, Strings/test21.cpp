#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 8, 4, 3};

    int size = sizeof(arr) / sizeof(arr[0]);

    int count = 0, max = -10000000, min = 10000000, max2 = -10000000, min2 = 10000000, target = 20, even = 0, sizeK = 2, count3 = 0;
    
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            int sum = 0, length = j - i + 1;
            cout << "Subarray: ";
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
                sum += arr[k];
            }
            if (length == sizeK) {
                count3++;
                if (sum > max2) max2 = sum;
                if (sum < min2) min2 = sum;
            }
            // if (sum == target) cout << endl << "Found Target: " << target << " Sum: " << sum << endl;
            if (sum > max) max = sum;
            if (sum < min) min = sum;
            if (sum % 2 == 0) even++;
            cout << "------------> Sum: " << sum << " ";
            // count++;
            cout << endl;
        }
        cout << endl;
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Even: " << even << endl;
    cout << "Total size K" << "(" << sizeK << "): " << count3 << endl;
    cout << "Max Size K: " << max2 << endl;
    cout << "Min Size K: " << min2 << endl;

    cout << endl;
    return 0;
}