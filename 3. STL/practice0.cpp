// Topic Name: vector implitation

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    vector<int> v (2, 5);
    vector<int> v2 = {10, 20, 30, 40};
    vector<int> v3 = v;
    vector<char> v4;
    vector<bool> v5;
    vector<string> v6;
    
    cout << "v3 loop: ";
    for(int x:v3) {
        cout << x << " ";
    }
    
    cout << endl;
    cout << endl;
    
    cout << "v2 loop: ";
    for (int x:v2) {
        cout << x << " ";
    }
    cout << endl;
    cout << "v2 size: " << v2.size() << endl;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    cout << "v2[0]: " << v2[0] << endl;
    cout << "v2[2]: " << v2[2] << endl;
    
    
    cout << "v2 front: " << v2.front() << endl;
    cout << "v2 back: " << v2.back() << endl;
    
    cout << "v empty: " << v.empty() << endl;
    cout << "v size: " << v.size() << endl;
    cout << endl;
    
    cout << "v output: ";
    for (int x:v) {
        cout << x << " ";
    }
    cout << endl;
    
    v.pop_back();
    v.pop_back();
    
    cout << "range loop: ";
    for (int x:v) {
        cout << x << " ";
    }
    cout << endl;
    
    v[0] = 10;
    v.erase(v.begin() + 2);
    
    cout << "for loop: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    cout << endl;
    cout << "v3 loop: ";
    for(int x:v3) {
        cout << x << " ";
    }
    
    cout << endl;

    
    cout << endl;
    v.insert(v.begin(), 100);
    v.resize(10);
    
    cout << "iterator: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    
    cout << "v size: " << v.size() << endl;
    v.clear();
    
    cout << "v size: " << v.size() << endl;
    cout << "empty: " << v.empty() << endl;

    cout << endl;
    cout << endl;    
    cout << "v3 loop: " << " ";
    for(int x:v3) {
        cout << x << " ";
    }

    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}