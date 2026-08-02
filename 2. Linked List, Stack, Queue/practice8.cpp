// Topic Name: Queue implimentation

#include <iostream>
using namespace std;

class queue {
private:
    static const int MAX = 100;
    int arr[MAX];
    int frontIndex;
    int rearIndex;

public:
    queue() {
        frontIndex = 0;
        rearIndex = -1;
    }

    bool isEmpty() {
        return frontIndex > rearIndex;
    }

    bool isFull() {
        return rearIndex == MAX -1;
    }

    int size() {
        if(isEmpty()) {
            cout << "Empty." << endl;
            return 0;
        }
        return rearIndex - frontIndex + 1;
    }

    //enq
    void enq(int value) {
        if(isFull()) {
            cout << "queue full." << endl;
            return;
        }

        rearIndex++;
        arr[rearIndex] = value;
    }

    //dq
    int dq() {
        if(isEmpty()) {
            cout << "Queue Empty." << endl;
            return -1;
        }
        
        frontIndex++;
        return arr[frontIndex];
    }
    
    //front
    int front() {
        if(isEmpty()) {
            return -1;
        }
        return arr[frontIndex];
    }
    
    //rear
    int rear() {
        if(isEmpty()) {
            return -1;
        }
        return arr[rearIndex];
    }
    
    //display
    void display() {
        if(isEmpty()) {
            return;
        }
        for (int i = frontIndex; i <= rearIndex; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    //search
    bool search(int value) {
        for (int i = frontIndex; i <= rearIndex; i++) {
            if (arr[i] == value) {
                return true;
            }
        }
        return false;
    }
    
    //clear
    void clear() {
        frontIndex = 0;
        rearIndex = -1;
    }


};

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    queue q;

    q.enq(10);
    q.enq(20);
    q.enq(30);
    q.enq(40);
    q.enq(50);

    cout << "Front: " << q.front() << endl;
    int dq = q.dq();

    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.rear() << endl;
    cout << "Size: " << q.size() << endl;

    cout << "dq: " << dq << endl;
    
    q.display();

    int num = 30;
    bool found = q.search(num);
    if(found) cout << "Found: " << num << endl;

    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}