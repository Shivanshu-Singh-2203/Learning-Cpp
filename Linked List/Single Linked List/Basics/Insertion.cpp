#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insertionAtHead(int data, Node** head){
    Node* temp = new Node(data);   
    temp->next = *head;
    *head = temp;
    cout << "Node with data "<< data << "inserted at the head." << endl;
}

/* Index starting fromo 0*/
void insert(int data, int position, Node** head){
    Node* temp = new Node(data);
    if(!position){
        insertionAtHead(data,&*head);
        return;
    }
    Node* current = *head;
    for(int j = 0; j < position - 1 && current != nullptr; j ++){
        current = current->next;
    }
    
    Node* rest = current->next;
    current->next = temp;
    temp->next = rest;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    insert(10, 0, &head); // Insert at head
    insert(20, 1, &head); // Insert at position 1
    insert(30, 1, &head); // Insert at position 1
    insert(5, 0, &head);  // Insert at head

    printList(head); // Expected: 5 -> 10 -> 30 -> 20 -> NULL

    return 0;
}

