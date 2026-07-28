// Topic Name: new, delete, heap, memeory leak

#include <iostream>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    int* a = new int(20);
    
    int b = 50;
    int* c = &b;
    int* d = c;
    int* e = d;

    cout << b << endl;
    cout << &b << endl;
    cout << endl;

    cout << c << endl;
    cout << *c << endl;
    cout << &c << endl;
    cout << endl;

    cout << e << endl;
    cout << *e << endl;
    cout << endl;

    cout << a << endl;
    cout << *a << endl;
    cout << &a << endl;
    
    delete a;
    a = nullptr;
    cout << endl;
    cout << a << endl;
    cout << endl;
    cout << endl;
    
    int* arr = new int[5]{2, 4, 5, 6, 7};

    // for (int i = 0; i < 5; i++) {
    //     cin >> arr[i];
    // }

    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    delete[] arr;

    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}