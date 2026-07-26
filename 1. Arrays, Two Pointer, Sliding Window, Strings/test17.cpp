#include <iostream>
using namespace std;

int main() {
    // for (int i = 0; i < size; i++) {
        //     cout << arr[i] << ' ';
    // }
    // for (int i = 0; i < size; i++) {
    //     cout << arr2[arr[i]] << ' ';
    // }
    int arr[] = {7, 0, 0, 1, 2, 6, 2, 6, 6, 4, 9};
    // int arr[] = {1, 1, 2, 2, 3, 4, 4, 4, 5};
    int freq[10] = {};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        // cout << arr[i] << ' ';
        // int count = 0;
        // bool duplicate = false;
        // for (int j = 0; j < i; j++) {
        //     if (arr[i] == arr[j]) {
        //         // count++;
        //         duplicate = true;
        //         continue;
        freq[arr[i]]++;
        //     }
        // }
    }
    int high = 0, high_freq = 0, low = 0, low_freq = 100000000, count = 0, num = 7, num2 = 6;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > high_freq) {
            high_freq = freq[i];
            high = i;
        }
        if (freq[i] > 0) {
            cout << "Num: " << i << " is " << freq[i] << " times" << endl;
        }

        
        if (freq[i] == 1) count++;

        // cout << freq[i] << " ";

        if (freq[i] > 0 && freq[i] < low_freq) {
            low_freq = freq[i];
            low = i;
        }
        
    }
     int count2 = freq[num2];

    std::cout << "Most frequent: " << high << std::endl;
    std::cout << "Least frequent: " << low << std::endl;
    cout << "Unique Elements: " << count << endl;
    cout << "Freq of num: " << num2 << " is " << count2 << endl;

    // int i = 4;
    // freq[i]++;
    // for (int i = 0; i < size; i++) {
    //     cout << freq[i] << ' ';
    // }
    
    // cout << "Num: " << num;
    // cout << "Size2: " << size2 << endl;
    
    cout << endl;
    return 0;
}