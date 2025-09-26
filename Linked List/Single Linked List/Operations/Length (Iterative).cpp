#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

int length(Node* head) {
    Node* temp = head;
    int length = 0;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }
    return length;
}

int main() {
    // Create linked list: 1 -> 3 -> 1 -> 2 -> 1
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    cout << "Count of nodes is " << length(head) << endl;

    // Free memory
    Node* temp = head;
    while (temp != nullptr) {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }

    return 0;
}

