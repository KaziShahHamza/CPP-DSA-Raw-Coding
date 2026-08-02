#include <iostream>
using namespace std;

int main() {
    // int n = 153;
    // int a = 0, b = 1, c = 0;
    // cin >> n;

    // for ( int i = 0; i < n - 1; i++) {
    //     c = a + b;
    //     a = b;
    //     b = c;

    // }

    // cout << "Fibonacci: " << c << endl;

    // int num = n, sum = 0, digits = 0, m;
    
    // while ( n > 0 ) { 
    //     m = n % 10;
    //     sum += m*m*m;
    //     n /= 10;
    // }

    // cout << "num: " << num << " sum: " << sum << endl;

    float n = 18, m = n, sqr = 0, j = 0, mid;

    // float mid = n/2;
    // int chk = mid * mid;

    // if (chk > n) {
        while ((m - j) > 0.0001) {
            mid = j + (m - j) / 2;
            if ( mid * mid > n) {
                m = mid;
            } else if ( mid * mid < n) {
                j = mid;
            } else if ((sqr - mid) <= 0.5) {
                sqr = mid;
                break;
            }
        }
            sqr = mid;
        

        // for (int i = j; i < m; i++) {
        //     float mid = n / 2;
        //     if ( mid * mid < n) {
        //         j = mid;
        //     } else {
        //         sqr = mid;
        //     }
        // }
    // }

    cout << "Prime Number: " << sqr << endl;
    
    
    return 0;
}
 