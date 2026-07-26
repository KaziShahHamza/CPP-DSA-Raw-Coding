#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 10, 20, 20, 20, 30, 30, 40, 50, 50, 50, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    int freq[101] = {};
    bool visited[101] = {};
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
        // cout << arr[i] << ' ';
    }

    for (int i = 0; i < size; i++) {
        visited[arr[i]] = true;
        // cout << arr[i] << ' ';
    }

    for (int i = 0; i < 101; i++) {
        if (freq[i] > 0) {
            cout << i << " appears " << freq[i] << " times." << endl;
        }
    }

    cout << endl << endl;
    for (int i = 0; i < 101; i++) {
        if (visited[i] == true) cout << "Visited: " << i << endl;
    }
    
    
    cout << endl;
    return 0;
}