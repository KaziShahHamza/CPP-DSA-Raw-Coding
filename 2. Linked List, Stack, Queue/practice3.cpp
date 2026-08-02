// Topic Name: Linked List Practice

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void traverse(Node *head) {
    if(head == nullptr) return;

    Node* curr = head;
    
    while(curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
} 

bool search(Node* head, int key) {
    if(head == nullptr) return false;

    Node* curr = head;  
    
    while(curr != nullptr) {
        if(curr->data == key) {
            return true;
        }

        curr = curr->next;
    }

    return false;
}

void insertStart(Node*& head, int value) {
    Node* newNode = new Node();
    
    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = nullptr;

    if(head == nullptr) {
        head = newNode;
    }

    Node* curr = head;

    while(curr->next != nullptr) {
        curr = curr->next;
    }

    curr->next = newNode;
}

void insertPos(Node*& head, int value, int pos) {
    if (pos == 0) {
        insertStart(head, value);
        return;
    }

    Node* curr = head;

    for (int i = 0; i < pos - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }

    Node* newNode = new Node();

    newNode->data = value;
    
    newNode->next = curr->next;
    curr->next = newNode;
}

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    Node* head = new Node();    
    Node* second = new Node();    
    Node* third = new Node();    
    Node* fourth = new Node();    
    
    head->data = 11;
    head->next = second;
    
    second->data = 22;
    second->next = third;
    
    third->data = 33;
    third->next = fourth;

    fourth->data = 44;
    fourth->next = nullptr;

    insertStart(head, 10);
    
    insertEnd(head, 55);

    insertPos(head, 111, 3);

    traverse(head);
    cout << endl;
    cout << endl;

    int key = 3;
    bool found = search(head, key);

    if(found) cout << "Found: " << key << endl;
    else cout << "Not Found: " << key << endl;

    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}