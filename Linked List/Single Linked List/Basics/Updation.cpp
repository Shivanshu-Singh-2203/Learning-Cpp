#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};

void insertionAtHead(int data, Node** head){
    Node* temp = new Node(data);
    temp->next = *head;
    *head = temp;
    cout << "Node with data "<< data << "inserted at the head." << endl;
}

void updateValue(Node** node, int value, int new_value){
    if((*node)->next == nullptr){
        return ;
    }
    Node* current = (*node);
    if(current->data == value){
        current->data = new_value;
    }

    return updateValue(&current->next,value, new_value);
}

void printNode(Node** node){
    if(*node == nullptr){
        cout << "-->" << "NULL" << endl;
        return ;
    }

    cout << (*node)->data << "-->" ;
    printNode(&(*node)->next);
}


int main() {
    Node* head = nullptr;

    insertionAtHead(10, &head);
    insertionAtHead(20, &head);
    insertionAtHead(30, &head);
    insertionAtHead(40, &head);

    cout << "Initial Linked List:" << endl;
    printNode(&head);

    cout << "\nUpdating value 20 to 25..." << endl;
    updateValue(&head, 20, 25);

    cout << "Linked List after update:" << endl;
    printNode(&head);

    cout << "\nUpdating value 100 to 200 (not present)..." << endl;
    updateValue(&head, 100, 200);

    cout << "Linked List after trying to update non-existent value:" << endl;
    printNode(&head);

    return 0;
}

