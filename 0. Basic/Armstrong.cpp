#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, remainder;
    int result = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(original != 0) {
        remainder = original % 10;

        result += pow(remainder, 3);

        original /= 10;
    }

    if(result == n) {
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }

    return 0;
}