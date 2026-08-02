#include <iostream>
using namespace std;

int main() {
    string str = "sdiofud332";
    string str2 = "123sad";
    int size = str2.length();
    
    if (str2.empty()) {
        cout << "Not a number.\n";
        return 0;
    }

    for (int i = 0; i < size; i++) {
        if (str2[i] < '0' || str2[i] > '9') {
            cout << "Not a number." << endl;
            return 0;
        }    
        
    }

    // for (char ch : str2) {
    //     if (ch < '0' || ch > '9') {
    //         cout << "Not a number\n";
    //         return 0;
    //     }
    // }

    cout << "Number\n";

    cout << endl;
    return 0;
}