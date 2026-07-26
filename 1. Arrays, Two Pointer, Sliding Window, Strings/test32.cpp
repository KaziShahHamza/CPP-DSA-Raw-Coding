#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 3, 5, 8, 4, 2};
    int arr2[] = {3, 5, 5, 8, 4, 9};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << endl;
    
    int size4 = size1 + size2;
    int arr4[size4] = {};

    int idx2 = 0;
    for (int i = 0; i < size1; i++) {
        arr4[idx2] = arr1[i];
        idx2++;
    }

    cout << "idx2: " << idx2 << endl;

    for (int i = 0; i < size2; i++) {
        arr4[idx2] = arr2[i];
        idx2++;
    }

    for (int i = 0; i < size4; i++) {
        cout << arr4[i] << ' ';
    }

    cout << endl;
    
    bool visited[size4] = {};

    for (int i = 0; i < size4; i++) {

        if (visited[i])
            continue;

        cout << arr4[i] << " ";

        for (int j = i + 1; j < size4; j++) {
            if (arr4[i] == arr4[j]) {
                visited[j] = true;
            }
        }
    }

    
    cout << endl;
    return 0;
}