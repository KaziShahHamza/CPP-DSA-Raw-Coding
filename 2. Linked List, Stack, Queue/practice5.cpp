// Topic Name: reverse

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void traverse(Node *head) {
    if(head == nullptr) return;

    Node* curr = head;
    while(curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
} 

void reverse(Node*& head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while(curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    Node* head = new Node();    
    Node* second = new Node();    
    Node* third = new Node();    
    Node* fourth = new Node();
    Node* fifth = new Node();
    
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

    cout << "All nodes: ";
    traverse(head);
    cout << endl;

    reverse(head);

    cout << "All nodes: ";
    traverse(head);
    cout << endl;
    
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}