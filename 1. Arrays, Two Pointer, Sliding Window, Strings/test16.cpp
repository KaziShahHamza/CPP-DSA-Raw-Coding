#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 5, 0, 7, 5, 7, 10};

    int size = sizeof(arr) / sizeof(arr[0]);
    int count= 0;
    
    for (int i = 0; i < size; i++) {
        // if ( arr[i] < 0) break;
        // cout << arr[i] << ' ';
        bool visited = true;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
            // cout << arr[j] << " ";
        }
        cout << arr[i] << " is " << count << " times.";
        cout << endl;
        count = 0;
    }
    
    
    cout << endl;
    return 0;
}