#include <iostream>
#include <algorithm>
using namespace std;

// int add (int a, int b) {
//     return a + b;
// }

// int sub (int a, int b) {
//     return a - b;
// }

// int mul (int a, int b) {
//     return a * b;
// }

// float division (int a, int b) {
//     return a / (float)b;
// }


int main() {
    // int a = 4, b = 5, c = 6;
    // cin >> a >> b >> c;
    // int n = 10, a = 15, b = 4, c = 3;

    // int sum = 0;
    // int max2 = max({a, b, c});

    // if ( a > b && a > c) {
    //     max2 = a;
    // } else if (b > a && b > c) {
    //     max2 = b;
    // } else {
    //     max2 = c;
    // }

    // // cout << "Max: " << max2 << endl;
    // for (int i = 0; i < n; i+=3) {
    //     if ( i % 2 == 1)
    //         sum += i;
    // }

    // int addition = add(a, b);

    // cout << "Addition: " << addition << endl;

    // int subtraction = sub(a, b);

    // cout << "subtraction: " << subtraction << endl;

    // int multiplication = mul(a, b);

    // cout << "multiplication: " << multiplication << endl;

    // float division2 = division(a, b);

    // cout << "division: " << division2 << endl;


    // cout << "Total: " << sum << "\n";

    // int arr[] = {1, 2, 3, 2, 1, 5};
    int arr[] = {12, 5, 0, 7, 100, 99, 75, 98, -100, -100, 98, -99, 23, -10, 45, 3, 0, 12, -5, 99, 1, 8, 8, 15, -20, 50, 2, -98, -98,2, 2, 31, 18, -1, 75, 0, 4, 4, 60, -30, 11, -98, 22, 22, 9, 100, 98, 100, -15, 5, 14, 14, 22};

    int size = sizeof(arr) / sizeof(arr[0]);
    
    int freq[101] = {};
    
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    
    int size2 = sizeof(freq) / sizeof(freq[0]);

    for (int i = 0; i < size2; i++) {
        
        if (freq[i] > 1)
            cout << i << " -> " << freq[i] << '\n';
    }

    return 0;
}
