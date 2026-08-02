// Topic Name: stack basic problems

#include <iostream>
using namespace std;

class Stack {
private: 
    static const int MAX = 50;
    int arr[MAX];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == MAX - 1;
    }

    int top() {
        if(isEmpty()){
            return -1;
        }
        return arr[topIndex];
    }

    void pop() {
        if(isEmpty()) {
            return;
        }
        topIndex--;
    }

    void push(int value) {
        if(isFull()) {
            return;
        }

        arr[++topIndex] = value;
    }

    int size() {
        return topIndex + 1;
    }

    int clear() {
        return topIndex = -1;
    }

    void display() {
        for (int i = topIndex; i >= 0; i--) {
            cout << char(arr[i]) << " ";
        }
        cout << endl;
    }

    bool search(int value) {
        for (int i = topIndex; i >= 0; i--) {
            if (value == arr[i]) {
                return true;
            }
        }
        return false;
    }

};

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    Stack st;
    string s = "banana";

    for (char ch: s) {
        st.push(ch);
    }

    cout << "Top: " << char(st.top()) << endl;
    cout << "Size: " << st.size() << endl;

    cout << endl;
    st.display();
    cout << endl;

    while(!st.isEmpty()) {
        cout << char(st.top());
        st.pop();
    }

    cout << endl;

    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}