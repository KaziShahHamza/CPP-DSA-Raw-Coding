// Topic Name: Memory & heap

#include <iostream>
using namespace std;

int* fun() {
    int* x = new int(100);
    cout << x << endl;
    return x;
}

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    
    // int a = 50;
    // // int b = *p;
    // int *p = &a;
    // // *p = 30;
    
    // // cout << a << endl;
    // cout << &a << endl;
    // cout << *p << endl;
    // cout << p << endl;
    // cout << b << endl;
    
    // int *p = fun();
    // cout << p << endl;
    // cout << *p << endl;

    // int a = 5;
    // int b = 8;

    // int *p = &a;

    // // p = &b;

    // *p = 20;

    // cout << a << endl;
    // cout << b << endl;
    // cout << &a << endl;
    // cout << p << endl;
    // cout << &b << endl;
    // cout << &p << endl;
    // cout << *p << endl;

    // int *p = new int(5);
    // int *q = p;
    // *q = 30;

    int *p = new int(5);
    // delete p;
    *p = 10;
    
    cout << p << endl;
    cout << *p << endl;
    
    delete p;
    // cout << q << endl;
    // cout << *q << endl;
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}