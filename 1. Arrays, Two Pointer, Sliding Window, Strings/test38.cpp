#include <iostream>
using namespace std;

void increase(int &x) {
    x++;
}

int increase2(int x) {
    x++;
    return x;
}

int main() {
    // int x = 50;

    // int arr[5] = {2, 4, 5, 6, 7}; 
    // // int &r = x;
    // // int &s = r;
    // // r++;
    
    // // s++;

    // // cout << x << endl;
    // // cout << r << endl;
    // // cout << s << endl;
    
    // int y = 0;
    
    // y = increase2(x);
    
    // cout << x << endl;
    // cout << y << endl;

    // string s;

    // cout << "Give input: ";
    // getline(cin, s);

    // cout << "output: " << s;
    
    // cout << endl;

    // cout << "size: " << s.length() << endl;

    // int x = 5, y = 10;

    // int *a = &x, *b = &y;

    
    // cout << x << endl;
    // cout << &x << endl;

    // *a = 20;
    // cout << a << endl;
    // cout << *a << endl;

    // cout << b << endl;
    // cout << *b << endl;

    // int arr[] = {10,20,30};

    // int *p = arr;

    // cout << p[0] << endl;
    // cout << p[1] << endl;
    // cout << p[2] << endl;

    // cout << p << endl;
    // cout << *p+1 << endl;


    int x = 5, y = 10, tmp = 0;
    int &i = x, &j = y;
    

    // int *a = &x;
    
    // i = 50;
    // *a = 10;

    cout << x << endl;
    cout << y << endl;
    cout << endl;
    
    // cout << i << endl;
    // cout << j << endl;
    // cout << endl;
    
    x = y, y = i;

    cout << x << endl;
    cout << y << endl;
    cout << endl;
    // cout << z << endl;
    // cout << &z << endl;
    // cout << endl;

    // cout << a << endl;
    // cout << *a << endl;
    
    
    return 0;
}
