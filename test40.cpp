#include <iostream>
using namespace std;

int main() {
    string name = "bnanana";

    int freq[100] = {};
    int freq2[100] = {};

    for (int i = 0; i < name.length(); i++) {
        char ch = name[i];

        if (ch >= 'A' &&  ch <= 'Z') freq[ch - 'A']++;
        if (ch >= 'a' &&  ch <= 'z') freq2[ch - 'a']++;
    }

    cout << endl;

    int max = -100000;

    for (int i = 0; i < 100; i++) {
        if (freq[i] > max) max = freq[i];
        char ch2;
        if (freq[i] > 0) {
            ch2 = i + 'A';
            cout << ch2 << " apprers " << freq[i] << " times." << endl;
        }
    }
    
    // cout << endl;
    // cout << "max is " << max;
    // cout << endl;

    for (int i = 0; i < 100; i++) {
        if (freq2[i] > max) max = freq2[i];
        char ch2;
        if (freq2[i] > 0) {
            ch2 = i + 'a';
            cout << ch2 << " apprers " << freq2[i] << " times." << endl;
        }
    }
    
    cout << "max is " << max;
    cout << endl;
    // cout << endl;
    
    int size = name.length(), idx = 0;
    char marr[size] = {};

    for (int i = 0; i < 100; i++) {
        char ch2;
        if (freq[i] == max) {
            // max = freq[i];
            ch2 = i + 'A';
            marr[idx] = ch2;
            idx++;
            cout << ch2 << " apprers maximum" << freq[i] << " times." << endl;
        }
    }
    
    cout << endl;
    
    for (int i = 0; i < 100; i++) {
        char ch2;
        if (freq2[i] == max) {
            // max = freq[i];
            ch2 = i + 'a';
            marr[idx] = ch2;
            idx++;
            cout << ch2 << " apprers maximum " << freq2[i] << " times." << endl;
        }
    }

    cout << endl;
    
    cout << endl;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < idx; j++) {
            if (marr[j] == name[i]) {
                cout << marr[j] << " appears first." << endl;
                return 0;
            }
            // cout << marr[i] << ' ';
        }
        // cout << name[i] << ' ';
    }
    
    cout << endl;
    return 0;
}