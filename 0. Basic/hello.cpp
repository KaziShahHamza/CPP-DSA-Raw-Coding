#include <iostream>
using namespace std;

int main() {
    // int a = 10;
    // int b = 6;
    // string name = "Hamza";

    // for (int i = 0; i < 5; i++) {
    //     cout << "Hello, " << name << "!" << endl;
    // }

    // int a, b;
    // cin >> a >> b;

    // // cout << "Total: " << a + b << "\n";
    // if (a % 2 == 0) { 
    //     cout << a << " is even.\n";
    // } else {
    //     cout << a << " is odd.\n";
    // }

    int n = 5;

    for (int i = 1; i <= n; i++) {
        
        for (int j = 5; j > i; j--) {
            cout << "   ";
        }

        for (int j = 1; j <= i; j++) {
            cout << " # ";
        }

        for (int j = 1; j < i; j++) {
            cout << " # ";
        }

        cout << endl;
        
    }

    for (int i = 5; i >= 1; i--) {

        for (int j = 5; j > i; j--) {
            cout << "   ";
        }

        for (int j = 1; j <= i; j++) {
            cout << " # ";
        }

        for (int j = 1; j < i; j++) {
            cout << " # ";
        }
        
        cout << endl;
    }


    return 0;
}
