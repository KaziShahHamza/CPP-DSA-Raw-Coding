#include <iostream>
using namespace std;

int main() {
	// int n = 3, p = 8, q = 0;
    // int m = 5;
    // const int r = 10;

    // cout << "constant value: " << r << endl;

    // // cout << n << " " << p << " " << q  << " " << m << endl;

    
    // while (n > q) {
    //     // while (m > 0) {
    //         // cout << " # ";
    //         // m--;
    //         // }
            
    //         do {
    //             cout << " # ";
    //             m--;
        
    //         } while (m > 0);
            
    //         m = 3;
            
    //         cout << endl;

    //     cout << " kaj hocce ";
    //     cout << endl;
    //     n--;
    // } 

    // int n = 6;

    int arr[] = {12, -5, 0, 7, 7, 23, -10, 45, 3, 0,
                  12, -5, 99, 1, 8, 8, 15, -20, 50, 2,
                  2, 2, 31, 18, -1, 75, 0, 4, 4, 60,
                  -30, 11, 22, 22, 9, 100, -15, 5, 14, 14};

    int c = 0;
    for (int i : arr) {
        c++;
    }
    // cout << arr[1] << endl;

    // for (int n : arr) {
    //     cout << n << " ";
    // }

    // int arr2[] = {};
    int sum = 0, avg = 0, max = -10000000, min = 100000000, num = 30;
    // cout << "Arr: ";
    int pos = 0, neg = 0;
    for (int i = 0; i < c; i++ ) {
        if (arr[i] < min) {
            min = arr[i];
        }
        
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] > 0) {
            pos++;
        }

        if (arr[i] < 0) {
            neg++;
            arr[i] = 0;
        }
        // sum += arr[i];
        // c++;
        // if (arr[i] == num) {
        //     cout << "Found: " << num << endl;
        //     return 0; 
        // }

        // cout << arr[i] << " ";
        

    }

    // cout << "Not found.\n";

    // cout << "Arr2: ";
    // for (int i = 0; i < n; i++) {
    //     cout << arr2[i] << " ";
        
    // }

    // cout << "Sum: " << sum;
    // avg = sum/c;
    // cout << "Avg: " << avg;
    cout << "max: " << max << endl;
    cout << "min: " << min;
    cout << endl;

    cout << "updated array: ";
    for(int i = 0; i < c; i++) {
        cout  << arr[i] << " ";
    }
    cout << endl;

    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
	return 0;
}
