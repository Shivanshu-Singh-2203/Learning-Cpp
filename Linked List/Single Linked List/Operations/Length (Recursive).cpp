#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int length(Node* head) {
    if (head == nullptr) {
        return 0;
    }
    return 1 + length(head->next);
}

void print(Node* head) {
    if (head == nullptr) {
        cout << "nullptr" << endl;
        return;
    }
    cout << head->data << " --> ";
    print(head->next);
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << "Length of linked list: " << length(head) << endl;
    cout << "Linked list: ";
    print(head);

    return 0;
}

