#include <iostream>
using namespace std;

int main() {
    int n;    
    int digit, rev = 0, c = 0, sum = 0; 
    cin >> n;

    // int num = n;

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    cout << "Sum of numbers: " << sum << endl;
    // return 0;

    // int sum = 1;
    // for (int i = 1; i < n; i++) {
    //     sum *= i;
    // }

    // cout << "Total: " << sum << "\n";
    //  return 0;
    
    // while (n > 0) {
    //     digit = n % 10;
    //     rev = rev * 10 + digit;
    //     n /= 10;
    //     c++;
    // }

    // cout << "Digit: " << c << endl;
    // cout << "Reverse: " << rev << endl;
    // // int digit = n.size();
    // // cout << digit << endl;
    // // cout << "Digits: " << c << endl;

    // if ( num == rev) {
    //     cout << "Pelindrome Number!" << endl;
    // }
    
    // return 0;
}
