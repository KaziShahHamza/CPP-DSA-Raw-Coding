#include <iostream>
using namespace std;

// float convert(float c) { 
//     float f = (c * 9 / 5) +32;
//     return f;
// }

// void swap(int a, int b) {
//     int tmp = a;
//     a = b;
//     b = tmp;
// }


int main() {
    // float c;

    // cout << "Give centigrade: ";
    // cin >> c;

    // float farenheit = convert(c);

    // cout << "Farenheit: " << farenheit << endl;

    // int a, b;
    // cout << "give a, b: " << endl;
    // cin >> a >> b;
     
    // int tmp = a;
    // a = b;
    // b = tmp;

    // cout << " value swapped a: " <<  a << " b: " << b << endl;


    // int arr[] = {12, 5, 0, 7, 100, 99, 75, 98, -100, -100, 98, -99, 23, -10, 45, 3, 0,
    //             12, -5, 99, 1, 8, 8, 15, -20, 50, 2, -98, -98,
    //             2, 2, 31, 18, -1, 75, 0, 4, 4, 60,
    //             -30, 11, -98, 22, 22, 9, 100, 98, 100, -15, 5, 14, 14, 22};

    int arr[] = {10, 10, 20, 30, 30, 40, 50, 40, 30, 30};
    int arr2[] = {};
    int size = sizeof(arr) / sizeof(arr[0]);

    int num = 0, count = 0;
    for (int i = 0; i < size; i++) {
        num = arr[i];
        for (int j = 0; j < size; j++) {
            if (arr[j] == num) {
                count++;
            }
        }
        if (count > 1) {
            arr2[i] = arr[i];
            cout << "Number: " << num << " appears " << count << " times." << endl;
        }
        count = 0;
    }

    for (int i = 0; i < size; i++) {
        if (arr2[i] == arr2[i-1]) {
            cout << arr2[i] << " ";
            i++;
        }
    }
    cout << endl;

    return 0;
}
