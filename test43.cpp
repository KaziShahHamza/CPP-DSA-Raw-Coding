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

    string name = "leLElel";
    char ch = 'd';
    int size2 = name.length();

    cout << name << endl;

    for (int i = 0; i < size2; i++) {
        if (name[i] < 'a' || name[i] > 'z') {
            name[i] = name[i] + 32;
        }
        // cout << arr[i] << ' ';
    }
    
    // cout << "name[2]: " << name[2] << endl;
    // ch = name[2] + 32;
    // cout << "char: " << ch << endl;
    cout << name << endl;


    int l = 0, r = name.length() - 1;
    
    // cout << name[l] << endl;
    // cout << name[r] << endl;
    // cout << "name length: " << name.length() << endl;
    
    bool ok = true;
    while (l < r) {
        if (name[l] != name[r]) {
            ok = false;
        }
        l++;
        r--;
    }
    
    if (ok) cout << "Pelindrome" << endl;
    else cout << "Not pelindrome" << endl;
 
    

    // Reverse
    string name2 = "banana";

    int l2 = 0, r2 = name2.length() - 1;
    char tmp = 'a';

    cout << name2 << endl;

    while (l2 < r2) {
        tmp = name2[l2];
        name2[l2] = name2[r2];
        name2[r2] = tmp;
        l2++;
        r2--;
    }
        
    cout << name2 << endl;
    
    cout << endl;
    return 0;
}