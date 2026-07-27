// Topic Name: Memory

#include <iostream>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    
    int a = 50;
    // int b = *p;
    int *p = &a;
    *p = 30;
    
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
    // cout << b << endl;
    
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}