// Topic Name: linked list search, traverse

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

bool search (Node *head1, int key1) {
    Node *current = head1;

    while(current != nullptr) {
        if(current->data == key1){
            return true;
        }

        current = current->next;
    }

    return false;
}

void traverse (Node *head1) {
    Node *current = head1;

    while (current != nullptr) {
        cout << current->data << " ";

        current = current->next;
    }
}

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = nullptr;

    int key = 40;

    traverse(head);
    cout << endl;

    bool found = search(head, key);

    if(found) {
        cout << "Found: " << key << endl;
    } else {
        cout << "Not found: " << key << endl;
    }
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}