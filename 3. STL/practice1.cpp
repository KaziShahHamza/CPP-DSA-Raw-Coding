// Topic Name: string

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    string s = "i am good";
    string s2 = " how are you?";
    string s3 = "leetcode";

    if(s == s2) cout << "matched." << endl;
    else cout << "no match." << endl;

    cout << "original: " << s3 << endl;
    sort(s3.begin(), s3.end());
    cout << "reverse: " << s3 << endl;

    cout << endl;
    cout << "original: " << s3 << endl;
    reverse(s3.begin(), s3.end());
    cout << "reverse: " << s3 << endl;

    
    string s4 = s3.substr(2, 6);

    int pos = s3.find("code");
    cout << "position: " << pos << endl;
    
    cout << s4 << endl;
    
    // cout << "Input: " << s2 << endl;
    
    s.push_back('!');
    
    cout << s << endl;
    
    s += s2;
    // s.pop_back();
    // s.pop_back();
    
    cout << s << endl;
    cout << s2 << endl;
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}