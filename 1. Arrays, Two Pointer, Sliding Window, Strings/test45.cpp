#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 4, 7, 10, 9, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k = 3, sum = 0, max = -100000, min = 100000, target = 21, c = 0, idx = -1, c2 = 0, idx2 = 0;

    cout << "Sum: ";
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    cout << sum << " "; 
    
    for (int i = k; i < size; i++) {
        sum += arr[i];
        sum -= arr[i - k];
        cout << sum << " "; 
    }

    cout << endl;
    return 0;
}