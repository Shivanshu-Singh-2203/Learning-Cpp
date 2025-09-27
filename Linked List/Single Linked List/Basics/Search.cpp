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
    cout << "Node with data "<< data << " inserted at the head." << endl;
}



void search(int val, Node** head){
    if(*head == nullptr){
        cout << "Element not found!" << endl;
        return;
    }

    if((*head)->data == val){
        cout << "Element found!" << endl;
        return;
    }
    return search(val, &(*head)->next);
}

void printNode(Node** node){
    if(*node == nullptr){
        cout << "-->" << "NULL" << endl;
        return ;
    }

    cout << (*node)->data << "-->" << endl;
    printNode(&(*node)->next);
}

int main(void){
    Node* head = new Node(40);
    insertionAtHead(50, &head);
    insertionAtHead(70, &head);
    insertionAtHead(80,&head);
    insertionAtHead(90, &head);

    search(40, &head);
    return 0;
}
