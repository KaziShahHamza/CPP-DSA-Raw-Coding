// Topic Name: Stack

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


};

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    if (st.isFull()) cout << "Full." << endl;
    else cout << "Not Full." << endl;
    // cout << st.isFull() << endl;

    cout << st.top() << endl;
    st.pop();
    cout << "after pop" << endl;
    cout << st.top() << endl;
    
    if (st.isEmpty()) cout << "Empty." << endl;
    else cout << "Not Empty." << endl;
    // cout << st.isEmpty() << endl;

    for (int i = 1; i < 5; i++) {
        st.push(i*100);
    }

    cout << st.top() << endl;

    while(!st.isEmpty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    cout << st.isEmpty() << endl;
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}