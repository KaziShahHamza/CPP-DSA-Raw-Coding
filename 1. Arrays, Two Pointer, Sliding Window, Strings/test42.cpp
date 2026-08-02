#include <iostream>
using namespace std;

int main() {
    string sen = "i love c++. this is good. maja aa gaya.";
    int c = 0;
    int size = sen.length();

    for (int i = 0; i < size; i++) {
        if (sen[i] == ' ') c++;
        // else cout << sen[i];
    }
    cout << endl;

    cout << "Total words: " << c+1 << endl;


    // string name = "lelelel";
    // int l = 0, r = name.length() - 1;
    
    // cout << name[l] << endl;
    // cout << name[r] << endl;
    // cout << "name length: " << name.length() << endl;
    
    // bool ok = true;
    // while (l < r) {
    //     if (name[l] != name[r]) {
    //         ok = false;
    //     }
    //     l++;
    //     r--;
    // }
    
    // if (ok) cout << "Pelindrome" << endl;
    // else cout << "Not pelindrome" << endl;
 
    

    // Reverse
    string name2 = "banana";

    int l = 0, r = name2.length() - 1;
    char tmp = 'a';

    cout << name2 << endl;

    while (l < r) {
        tmp = name2[l];
        name2[l] = name2[r];
        name2[r] = tmp;
        l++;
        r--;
    }
        
    cout << name2 << endl;
    
    cout << endl;
    return 0;
}