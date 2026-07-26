#include <iostream>
using namespace std;

int main() {
    int arr1[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int arr2[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (size1 != size2) {
        cout << "array not equal. (1)" << endl;
        return 0;
    }
    
    for (int i = 0; i < size1; i++) {
        if(arr1[i] != arr2[i]) {
            cout << "array not equal. (2)" << endl;
            return 0;
        }
    }
    
    cout << "Array Equal." << endl;
    cout << endl;
    return 0;
}