// Topic Name: linked list insert, delete

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void traverse(Node *head) {
    Node *current = head;

    while (current != nullptr) {
        cout << current->data << " ";

        current = current->next;
    }
}

void insertBeginning(Node* &head, int value) {
    Node *newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

void insertEnd(Node* &head, int value) {
    Node *newNode = new Node();

    newNode->data = value;
    newNode->next = nullptr;
    
    if(head == nullptr) {
        head = newNode;
        return;
    }

    Node *current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;

    // newNode = head->next;
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

    traverse(head);
    cout << endl;

    insertBeginning(head, 100);
    traverse(head);

    cout << endl;
    insertEnd(head, 90);
    traverse(head);
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}