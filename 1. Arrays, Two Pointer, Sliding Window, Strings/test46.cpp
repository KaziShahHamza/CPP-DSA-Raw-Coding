#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;

    int arr[] = {12, 5, 4, 7, 10, 9, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);


    int k = 3, sum = 0, max = -100000, min = 100000, target = 21, c = 0, idx = -1, c2 = 0, idx2 = 0;

    cout << "Sum: ";
    for (int i = 0, j = k-1; j < size; i++, j++) {
        sum = arr[i] + arr[i+1] + arr[j];
        cout << sum << " ";
        if (sum > max) max = sum;
        if (sum < min) min = sum;
        if (sum > target) c++;
        if (sum == target) c2++;
    }

    for (int i = 0, j = k-1; j < size; i++, j++) {
        sum = arr[i] + arr[i+1] + arr[j];
        if (sum == max) idx2 = i;
    }

    for (int i = 0, j = k-1; j < size; i++, j++) {
        sum = arr[i] + arr[i+1] + arr[j];
        if (sum == target) {
            idx = i;
            break;
        }

    }

    cout << endl;
    cout << "greater than target: " << c << endl;
    cout << "equal to target: " << c2 << endl;
    cout << "index of target " << idx << endl;
    cout << "index of max " << idx2 << endl;

    float avg = 0;
    cout << "Average: ";
    for (int i = 0, j = k-1; j < size; i++, j++) {
        avg = arr[i] + arr[i+1] + arr[j];
        avg = avg / k;
        cout << fixed << setprecision(2) << avg << " ";
    }
    cout << endl;
    
    cout << "maximum: " << max << endl;
    cout << "minimum: " << min << endl;
    
    cout << endl;
    cout << "--- Outptut Ends Here ---" << endl;
    cout << endl;

    return 0;
}