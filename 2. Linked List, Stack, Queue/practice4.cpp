// Topic Name: Likned list delete

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

void deleteEnd(Node*& head) {
    if (head == nullptr) {
        return;
    }

    Node* curr = head;

    while (curr->next->next != nullptr) {
        curr = curr->next;
    }

    Node* tmp = curr->next;
    curr->next = nullptr;
    delete tmp;
}

void deleteStart(Node*& head) {
    if (head == nullptr) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deletePos(Node*& head, int pos) {
    if(pos == 0) {
        deleteStart(head);
        return;
    }

    Node* curr = head;

    for (int i = 0; i < pos-1 && curr->next != nullptr; i++) {
        curr = curr->next;
    }
    
    cout << "Stopped at: " << curr->data << endl;

    if(curr->next == nullptr) return;

    Node* tmp = curr->next;
    curr->next = tmp->next;
    delete tmp;
}

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    Node* head = new Node();    
    Node* second = new Node();    
    Node* third = new Node();    
    Node* fourth = new Node();
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

    cout << "All nodes: ";
    traverse(head);
    cout << endl;

    // deleteStart(head);
    // cout << endl;
    
    // deleteEnd(head);
    // cout << endl;

    deletePos(head, 2);
    cout << endl;
    
    cout << "All nodes: ";
    traverse(head);
    cout << endl;
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}