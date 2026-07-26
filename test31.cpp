#include <iostream>
using namespace std;

int main() {
    int arr1[] = {2, 7, 3, 4, 3, 3, 3, 6, 7, 9, 11};
    int arr2[] = {2, 4, 6, 3, 3, 4, 3, 3, 6, 10};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[size1];
    int idx = 0;

    // Find common elements
    for (int i = 0; i < size1; i++) {
        bool found = false;

        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            arr3[idx] = arr1[i];
            idx++;
        }
    }

    // Remove duplicates using visited[]
    bool visited[idx] = {};

    cout << "Unique Intersection: ";

    for (int i = 0; i < idx; i++) {

        if (visited[i])
            continue;

        cout << arr3[i] << " ";

        for (int j = i + 1; j < idx; j++) {
            if (arr3[i] == arr3[j]) {
                visited[j] = true;
            }
        }
    }

    cout << endl;

    return 0;
}