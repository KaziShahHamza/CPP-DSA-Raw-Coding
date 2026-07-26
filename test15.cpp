#include <iostream>
using namespace std;

int main() {
    int arr[] = {-20, -10, -5, 0, 0, 2, 12, 12, 0, 1, 2, 5, 8, 10, 15, 20, 20, 25, 30};

    // int arr[] = {10, 10, 10, 20, 20, 20, 30, 30, 40, 40, 40, 50, 10, 50, 30, 10, 50, 50};

    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++) {
        bool duplicate = false;
        for (int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
                
            }
        }
        if (!duplicate) {
            cout << arr[i] << " ";
        }
    }
    
    
    cout << endl;
    return 0;
}