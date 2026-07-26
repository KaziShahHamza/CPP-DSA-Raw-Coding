#include <iostream>
using namespace std;

int main() {
    string name = "bnanana";

    int freq[128] = {};

    // Count frequencies
    for (char ch : name)
        freq[ch]++;

    // Find maximum frequency
    int mx = 0;
    for (int i = 0; i < 128; i++)
        if (freq[i] > mx)
            mx = freq[i];

    // Print frequencies (optional)
    for (int i = 0; i < 128; i++)
        if (freq[i] > 0)
            cout << char(i) << " appears " << freq[i] << " times.\n";

    cout << "\nMaximum frequency = " << mx << endl;

    // First character having maximum frequency
    for (char ch : name) {
        if (freq[ch] == mx) {
            cout << ch << " appears first among the most frequent characters.\n";
            break;
        }
    }

    return 0;
}