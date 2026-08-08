// Topic Name: pair

#include <iostream>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    pair<int, int> p1(3, 4);
    // pair<int, int> p2 = {8, 9};
    pair<string, double> person = {"hamza", 5.11};
    pair<char, float> p2 = {'A', 3.42};
    auto p3 = make_pair("hamza", 78);
    pair<string, pair<string, float>> student = {"hamza", {"A+", 83}};

    // p2 = {5, 10};

    cout << "Student: " << student.first << ", Grade: " << student.second.first << ", Number: " << student.second.second << endl;

    cout << "p1 first: " << p1.first << endl;
    cout << "p1 second: " << p1.second << endl;

    cout << endl;

    cout << "p2 first: " << p2.first << endl;
    cout << "p2 second: " << p2.second << endl;
    
    cout << endl;

    cout << "p3 first: " << p3.first << endl;
    cout << "p3 second: " << p3.second << endl;
    
    cout << endl;

    cout << "person name: " << person.first << endl;
    cout << "person height: " << person.second << endl;
    
    
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}